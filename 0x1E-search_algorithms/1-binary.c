#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array of integers
* using the Binary search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: Value to search for.
*
* Return: Index where value is located, or -1 if value is not present
* in array or if array is NULL.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
