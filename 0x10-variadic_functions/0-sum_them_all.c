#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all integers passed to them
 * @n: integer value
 *
 * Return: 0 if n == 0 or sum of all arguments if otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args_val;

	if (n == 0)
		return (0);

	va_start(args_val, n);
	for (; i < n; i++)
	{
		sum += va_arg(args_val, int);
	}
	va_end(args_val);

	return (sum);
}
