#include "main.h"
#include <stdlib.h>
/***/
int _size(char *c)
{
	int s;

	for (s = 0; c[s] != '\0'; s++)
	{
	;
	}
	return (s);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, size1;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _size(s1);
	ptr = malloc(size1 + n + 1);
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	ptr[i] = s1[i];
	}
	for (k = 0; k < n; k++)
	{
	ptr[i] = s2[k];
	i++;
	}
	ptr[i] = '\0';
	return (ptr);
	
}
