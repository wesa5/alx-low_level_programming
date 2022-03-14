#include <stdio.h>

/**
* main - Program entry point
*
* Return: 0 on success. Error code otherwise
*/
int main(void)
{
	char c = '0';

		while (c <= '9')
		{
			putchar(c);
			c++;
		}

	putchar('\n');
	return (0);
}
