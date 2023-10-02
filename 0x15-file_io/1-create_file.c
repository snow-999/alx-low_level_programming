#include "main.h"
/**
 * length - get length of string
 * @s: string
 * Return: number of index of string
*/
int length(char *s)
{
	int x = 0;

	if (s == NULL)
	{
	return (0);
	}
	while (*s++)
	{
	x++;
	}
	return (x);
}
/**
 * create_file - creat a file if it doesnot exist
 * @filename: name of the file
 * @text_content: file content
 * Return: 1 \ -1
 *
*/
int create_file(const char *filename, char *text_content)
{
	int fop;
	ssize_t byt = 0, len = length(text_content);

	if (filename == NULL)
	{
	return (-1);
	}
	fop = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fop == -1)
	{
	return (-1);
	}
	if (len)
	{
	byt = write(fop, text_content, len);
	}
	close(fop);
	if (byt == len)
	{
	return (1);
	}
	else
	{
	return (-1);
	}
}
