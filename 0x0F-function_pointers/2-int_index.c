#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - A function that serches for an integer
 * @size: Number of elements in the array
 * @array: array to be searched
 * @cmp: Pointer to a function that compares values
 *
 * Return: index of element that matches, or -1 if
 * size <= 0 or no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	if (i == size)
		return (-1);
	return (-1);
}
