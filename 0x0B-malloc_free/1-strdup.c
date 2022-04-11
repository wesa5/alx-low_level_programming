#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer to newly allocated space in memory
 * @str: character array/string
 *
 * Return: NULL if str is NULL and pointer to str if there's sufficient sapce
 * otherwise, return NULL as well
 */

char *_strdup(char *str)
{
	char *new_str, *start;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;
	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new_str = malloc((len + 1) * sizeof(char));
	start = str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (start);
	}

	else
	{
		return (NULL);
	}
}