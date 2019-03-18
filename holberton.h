#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	void (*f)(va_list valist);
} op_t;
int _putchar(char *c, unsigned int lenght);
int _printf(const char *format, ...);
void reverse_str(char *str, int size);
char *number_to_string(int number);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char getformat(char *s);
void print_char(va_list valist);

#endif /* HOLBERTON_H */
