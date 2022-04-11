#include "main.h"

/**
 * str_concat - Appends a string to the end of another
 * @s1: Initial string
 * @s2: Second string
 *
 * Return: Character array
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int y, x = 0, i = 0;

	while (*s1)
	{
		x++;
		s1++;
	}

	while (*s2)
	{
		i++;
		s2++;
	}

	for (y = 0; y < x; y++)
	{
		new_str[y] = s1[y];
	}

	for (; y < x + i; y++)
	{
		int m = 0;

		new_str[y] = s2[m];
		m++;
	}

	if (y == x + i)
		new_str[y] = '\0';

	return (new_str);
}