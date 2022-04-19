#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given
 * as a parameter in each element of string
 * @array: An array of function pointers
 * @size: Size of the array
 * @action: pointer to the function
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
