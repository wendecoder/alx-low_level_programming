#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - function to search for a value using linear search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index of the value in the array or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int size1 = (int)size;
	int i;

	for (i = 0; (i < size1); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		}
	}
	return (-1);
}
