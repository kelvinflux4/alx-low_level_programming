#include "main.h"

/**
  * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
  * followed by a new line
  * Return: 0
  */
void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
