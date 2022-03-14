#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: 0 on success. Error otherwise
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}

	putchar('\n');
	return (0);
}
