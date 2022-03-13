#include <stdio.h>
/**
* main - Program entry point
*
* Return: 0 on success. Error code otherwise
*/
int main(void)
{
	char ch = 'a';
		while (ch <= 'z')
		{
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
			ch++;
		}
		putchar('\n');

	return (0);
}

#include <stdio.h>
/**
* main - Program entry point
*
* Return: 0 on success. Error code otherwise
*/
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
#include <stdio.h>
/**
* main - Program entry point
*
* Return: 0 on success. Error code otherwise
*/
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);

	}
	putchar('\n');

	return (0);
}
