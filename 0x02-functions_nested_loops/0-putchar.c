#include <stdio.h>
/**
 * main - Entry block
 * 
 * Return: Always 0
 */
int main(void)
{
	char c[10] = "putchar";

	int i = 0;

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
	
}