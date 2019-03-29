#include "holberton.h"
/**
 * print_hexa_lower_case - print hexa letters lowercase
 * @valist: valist
 * @opt: option to print
* Return: count of bytes printed
 */
int print_hexa_lower_case(va_list valist, options opt)
{
	char *str;
	int bytes = 0;
	(void) opt;

	str = unsigned_number_to_string(va_arg(valist, unsigned int), 16);
	if (str == NULL)
	{
		return (_putchar("(null)", str_length("(null)")));
	}
	if (opt.hash == 1)
                bytes += write(1, "0x", 2);
	bytes += _putchar(str, str_length(str));
	free(str);
	return (bytes);
}
/**
 * print_hexa_upper_case - print hexa in upper case
 * @valist: valist
 * @opt: option to print
* Return: count of bytes printed
 */
int print_hexa_upper_case(va_list valist, options opt)
{
	char *str;
	int bytes = 0;
	(void) opt;

	str = unsigned_number_to_string(va_arg(valist, unsigned int), 17);
	if (str == NULL)
	{
		return (_putchar("(null)", str_length("(null)")));
	}
	if (opt.hash == 1)
		bytes += write(1, "0X", 2);
	bytes += _putchar(str, str_length(str));
	free(str);
	return (bytes);
}
/**
 * print_octal - print number in octal
 * @valist: valist
 * @opt: option to print
* Return: count of bytes printed
 */
int print_octal(va_list valist, options opt)
{
	char *str;
	int bytes = 0;
	(void) opt;

	str = unsigned_number_to_string(va_arg(valist, unsigned int), 8);
	if (str == NULL)
	{
		return (_putchar("(null)", str_length("(null)")));
	}
	if (opt.hash == 1 && str[0] != '0')
		bytes += write(1, "0", 1);
	bytes += _putchar(str, str_length(str));
	free(str);
	return (bytes);

}
