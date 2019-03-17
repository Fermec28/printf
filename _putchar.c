#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @lenght: length of the string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char *c, unsigned int lenght)
{
	return (write(1, c, lenght));
}
