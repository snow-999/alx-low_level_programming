#include "main.h"
/**
 * read_textfile - read a file
 * @filename: name of the file
 * @letters: number
 * Return: number of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fop;
	ssize_t byt;
	char bif[buf_size * 8];

	if (filename == NULL || letters == 0)
	{
	return (0);
	}
	fop = open(filename, O_RDONLY);
	if (fop == -1)
	{
	return (0);
	}
	byt = read(fop, &bif[0], letters);
	byt = write(STDOUT_FILENO, &bif[0], byt);
	close(fop);
	return (byt);
}
