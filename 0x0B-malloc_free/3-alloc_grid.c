#include <stdlib.h>
#include "main.h"

/**		
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 diminsional array
**/

int **alloc_grid(int width, int height)
{
	int **row;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);

	row = malloc(sizeof(int *) * height);

	if (row == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		row[x] = malloc(sizeof(int) * width);
	
		if (row[x] == NULL)
	 	{
			for(x = 0; x >= 0; x--)
				free(row[x]);
			free(row);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			row[x][y] =0;
	}

	return (row);
}
