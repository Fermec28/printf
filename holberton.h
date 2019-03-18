#ifndef HOLBERTON_H
#define HOLBERTON_H

/*#include <stdio.h>
  #include <stdlib.h>*/
#include <stdarg.h>
#include <unistd.h>

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
char getformat(char *s);
void print_char(va_list valist);

#endif /* HOLBERTON_H */
