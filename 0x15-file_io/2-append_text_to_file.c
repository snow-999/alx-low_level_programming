#include "main.h"
/**
 * length - get the length of string
 * @s: string
 * Return: number of index
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
 * append_text_to_file - append the text
 * @filename: name of the file
 * @text_content: the text of the file
 * Return: 1 / -1 if fails
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fop;
	ssize_t byt = 0, len = length(text_content);

	if (filename == NULL)
	{
	return (-1);
	}
	fop = open(filename, O_WRONLY | O_APPEND);
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
