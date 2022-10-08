#include <stdio.h>
#include "search_algos.h"
/**
 * search_for_index - function() to search a value in a sorted \
 * array using a binary search.
 * @array: The array to search in.
 * @l: The left index of the array.
 * @r: The right index of the array.
 * @value: The value to look for.
 *
 * Return: The index of the value in the array or -1.
 */
int search_for_index(int *array, size_t l, size_t r, int value)
{
	int m, i, j, k;

	i = (int)l;
	j = (int)r;

	if (!array)
		return (-1);
	printf("Searching in array: ");
	for (k = i; k < j + 1; k++)
		printf("%d%s", *(array + k), k < j ? "," : "\n");

	m = i + ((j - i) / 2);
	if (i == j)
		return (*(array + m) == value ? m : -1);
	if (value < *(array + m))
		return (search_for_index(array, i, m - 1, value));
	else if (value == *(array + m))
		return (m);
	else
		return (search_for_index(array, m + 1, j, value));
}

/**
 * binary_search - function to search a value in array using binary search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index of the value in the array or -1
 */

int binary_search(int *array, size_t size, int value)
{
	return (search_for_index(array, 0, size - 1, value));
}
