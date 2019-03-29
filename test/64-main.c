#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = _printf("%6d", 10);
	printf("\n%i\n", r);
	r = _printf("%06d", 10);
	printf("\n%i\n", r);
	r = _printf("% 6d", 10);
	printf("\n%i\n", r);
	r = _printf("%#X", 10);
	printf("\n%i\n", r);
	r = _printf("%#x", 10);
	printf("\n%i\n", r);
	r = _printf("%#o", 10);
	printf("\n%i\n", r);
	r = _printf("%#o", 0);
	printf("\n%i\n", r);
	return (0);
}
