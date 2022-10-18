#include "main.h"

/**
 * _abs - prints the absolute value of the integer
 *
 * @num: character value
 *
 * Return: 0
 *
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
		return (num);
	}
	else
	{
		num = num * 1;
		return (num);
	}
}
