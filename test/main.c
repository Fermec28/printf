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
	r = _printf("%c", '\0');
	printf("%i", r);
	return (0);
}
