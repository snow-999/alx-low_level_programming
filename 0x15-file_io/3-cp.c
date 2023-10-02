#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file NAME_OF_THE_FILE %s\n"
#define ERR_NOWRITE "Error: Can't write to NAME_OF_THE_FILE %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - cheack my code
 * @ac: number of argumnet
 * @av: argument
 * Return: 1
*/
int main(int ac, char **av)
{
	int from_fop = 0, to_fop = 0;
	ssize_t x;
	char buf[buf_size];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, USAGE), exit(97);
	}
	from_fop = open(av[1], O_RDONLY);
	if (from_fop == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	}
	to_fop = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERM);
	if (to_fop == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	}
	while ((x = read(from_fop, buf, buf_size)) > 0)
	{
		if (write(to_fop, buf, x) != x)
		{
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
		}
	}
	if (x == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	}
	from_fop = close(from_fop);
	to_fop = close(to_fop);
	if (from_fop)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fop), exit(100);
	}
	if (to_fop)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fop), exit(100);
	}
	return (EXIT_SUCCESS);


}
