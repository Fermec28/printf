#include "holberton.h"

/**
 * getfunction- selects the correct function to perform the operation
 * @format: Operator given
 *
 * Return: a pointer to the function that corresponds to the operator given
 */
void (*getfunction(const char format))(va_list)
{
	int i_struct = 0;
	op_t print[] = {
		/*	{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},*/
		{NULL, NULL}
	};

	while (format != '\0')
	{
		i_struct = 0;
		while (print[i_struct].op != NULL)
		{
			if (format == *(print[i_struct].op))
			{
				/*		return (print[i_struct].f);*/
			}
			i_struct++;
		}
	}
	return (NULL);
}
