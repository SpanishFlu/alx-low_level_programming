#include "main.h"

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to the newly allocated 2D array,
 *         or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);
	int **grid = malloc(width * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	int *data = malloc(width * height * sizeof(int));

	if (data == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (int i = 0; i < height; i++)

		grid[i] = data + i * height;
	return (grid);
}
