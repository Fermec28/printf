#include "holberton.h"
/**
 * print_reverse_string - print string
 * @valist: valist
 * @opt: option to print
 * Return: count of bytes printed
 */
int print_reverse_string(va_list valist, options opt)
{
	char *aux;
	char *str = va_arg(valist, char*);
	unsigned int length;
	(void) opt;

	if (str == NULL)
	{
		return (_putchar("(null)", str_length("(null)")));
	}
	aux = malloc(3 * sizeof(char));
	if (aux == NULL)
		return (_putchar("(null)", str_length("(null)")));
	for (length = 0; str[length]; length++)
	{
		aux[length] = str[length];
	}
	aux[length] = str[length];
	reverse_str(aux, length, 0);
	length = _putchar(aux, length);
	free(aux);
	return (length);
}
