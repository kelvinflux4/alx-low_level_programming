#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%ld\n", sizeof(char));
	printf("%ld\n", sizeof(int));
	printf("%d\n", sizeof(long int));
	printf("%ld\n", sizeof(long long int));
	printf("%d\n", sizeof(float));

	return (0);
}
