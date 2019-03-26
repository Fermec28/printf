#include "holberton.h"
/**
 * print_rot13 - print with rot13
 * @valist: valist
 * @opt: option to print
 * Return: count of bytes printed
 */
int print_rot13(va_list valist, options opt)
{
	int iterator, bytes;
	int ikeys = 0;
	char keys[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char values[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *aux;
	char *str = va_arg(valist, char*);
	int flag = 1;
	(void) opt;

	if (str == NULL)
	{
		return (_putchar("(null)", str_length("(null)")));
	}
	aux = malloc((str_length(str) + 1) * sizeof(char));
	for (iterator = 0; str[iterator]; iterator++)
	{
		while (keys[ikeys] && flag)
		{
			if (str[iterator] == keys[ikeys])
			{
				aux[iterator] = values[ikeys];
				flag = 0;
			}
			ikeys++;
		}
		ikeys = 0;
		flag = 1;
	}
	aux[iterator] = str[iterator];
	bytes =  _putchar(aux, str_length(str));
	free(aux);
	return (bytes);
}
