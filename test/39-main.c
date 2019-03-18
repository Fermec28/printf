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

	returned = _printf("Yo %s Tu\n", "jaiber");
	printf("Yo %s Tu\n", (char *) 0);
	return (0);
}
