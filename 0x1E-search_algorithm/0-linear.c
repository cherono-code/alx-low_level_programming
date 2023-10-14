#include "search_algos.h"

/**
 * linear_search -  A function that searches for a value in an array of
 * .....integers using the Linear search algorithm
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t e;

	for (e = 0; (e < size) && (array); e++)
	{
		if (*(array + e) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)e, *(array + e));
			return (e);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)e, *(array + e));
		}
	}
	return (-1);
}
