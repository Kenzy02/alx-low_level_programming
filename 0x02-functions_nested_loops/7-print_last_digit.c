#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @x: the int to extract the last digit from
 * Return: value of the last digit
*/

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (x < 0)
	{
		y = -1 * (x % 10);
	}
	else
	{
		y = x % 10;
	}
	_putchar(y + 48);
	return (y);
}
