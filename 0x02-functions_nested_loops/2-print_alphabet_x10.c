#include "main.h"

/**
 * print_alphabet_x10 - checks the code
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 1;
	int j;

	while (i < 11)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
