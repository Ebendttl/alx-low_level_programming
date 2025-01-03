/**
 * allocate_map - Allocates memory for a 2D array.
 * @n: The number of rows.
 * @m: The number of columns.
 *
 * Return: A pointer to the allocated 2D array.
 */
#include <stddef.h>
int **allocate_map(int n, int m)
{
	int **map;

	map = malloc(sizeof(int *) * n);
	for (size_t i = 0; i < n; i++)
	{
		map[i] = malloc(sizeof(int) * m);
	}
	return (map);
}
