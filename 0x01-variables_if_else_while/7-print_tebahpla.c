#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 on success. Error code otherwise
*/
int main(void)
{
	char i = 'z';

		while (i >= 'a')
		{
			putchar(i);
			i--;
		}

	putchar('\n');
	return (0);
}
