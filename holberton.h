#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct options - Struct options
 *
 * @type: i-integers, f-float, s- string
 * @precision: Pricission of the print
 * @length: Length of the print
 * @signn: Sing - in printf
 * @signp: Sing + in printf
 * @zeros: zero flag in printf
 * @spc: space flag in printf
 * @hash: # flag in printf
 * @point: point flag in printf
 */
typedef struct options
{
	char type;
	int precision;
	int length;
	int signn;
	int signp;
	int zeros;
	int spc;
	int hash;
	int point;
	int longer;
	int sh;
} options;

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list valist, options opt);
} op_t;

int _putchar(char *c, unsigned int lenght);
int _printf(const char *format, ...);
void reverse_str(char *str, int size, char keep_first);
char *number_to_string(int number, char base);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
options getformat(const char *s, int *pos);
int print_char(va_list valist, options opt);
int print_integer(va_list valist, options opt);
unsigned int str_length(char *str);
int print_string(va_list valist, options opt);
int (*getfunction(const char format))(va_list, options);
int print_float(va_list valist, options opt);
char *unsigned_number_to_string(unsigned int number, char base);
int print_hexa_lower_case(va_list valist, options opt);
int print_hexa_upper_case(va_list valist, options opt);
int print_octal(va_list valist, options opt);
int print_unsigned_integer(va_list valist, options opt);
int print_reverse_string(va_list valist, options opt);
int print_rot13(va_list valist, options opt);
#endif /* HOLBERTON_H */
