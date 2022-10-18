#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character value
 *
 * Return: 0
 *
 */
int _isalpha(int c)
{
	int a;

	if (a >= 'A' && a <= 'Z')
	{
	return (1);
	}
	else if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

