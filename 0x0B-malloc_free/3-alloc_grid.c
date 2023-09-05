#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - make a grid
 * @width: grid width
 * @height: grid height
 * Return: temp
*/
int **alloc_grid(int width, int height)
{
	int c, r, **temp;

	temp = malloc(sizeof(*temp) * height);

	if (width <= 0 || height <= 0 || temp == 0)
	{
	return (NULL);
	}
	else
	{
		for (r = 0; r < height; r++)
		{
		temp[r] = malloc(sizeof(**temp) * width);
		if (temp[r] == 0)
			{
			while (r--)
				{
				free(temp[r]);
				}
			free(temp);
			return (NULL);
			}
			for (c = 0; c < width; c++)
			{
			temp[r][c] = 0;
			}
		}
	}
	return (temp);

}
