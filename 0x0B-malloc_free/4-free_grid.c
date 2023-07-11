#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - print a fn that frees 2dim array
 * @grid: 2dim grid
 * @height: grid height
 * Description: grid memory to be freed
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
