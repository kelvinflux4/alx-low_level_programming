#include "main.h"

/**
 * print_sign - prints the sign of the integer.
 * @n: character value
 *
 * Return: 0
 * sign of the integer
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
