#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase,
 * followed by anew line
 *
 * Return: Always 0 (Sucess)
*/

int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
