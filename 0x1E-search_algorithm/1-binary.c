#include "search_algos.h"

/**
 * print_array - Prints the contents of an array.
 * @array: The source of the array to print.
 * @l: The left index of the array.
 * @r: The right index of the array.
 */
void print_array(int *array, size_t l, size_t s)
{
	size_t e;

	if (array)
	{
		printf("Searching in array: ");
		for (e = l; e < l + (s - l + 1); e++)
			printf("%d%s", *(array + e), e < l + (s - l) ? ", " : "\n");
	}
}

/**
 * binary_search_index - Searches a value in a sorted array using \
 * a binary search.
 * @array: The array to search in.
 * @l: The left index of the array.
 * @r: The right index of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int binary_search_index(int *array, size_t l, size_t s, int value)
{
	size_t n;

	if (!array)
		return (-1);
	print_array(array, l, s);
	n = l + ((s - l) / 2);
	if (l == s)
		return (*(array + n) == value ? (int)n : -1);
	if (value < *(array + n))
		return (binary_search_index(array, l, n - 1, value));
	else if (value == *(array + n))
		return ((int)n);
	else
		return (binary_search_index(array, n + 1, s, value));
}

/**
 * binary_search - Searches a value in a sorted array using a binary search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}
