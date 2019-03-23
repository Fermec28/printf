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
	int returned;

	returned = _printf("1246");
	printf("\nbytes returhed:%d\n", returned);

	returned = _printf("%s", "Holas");
	printf("\nbytes returhed:%d\n", returned);

	returned = _printf("%d", 1234567);
	printf("\nbytes returhed:%d\n", returned);
	return (0);
}
