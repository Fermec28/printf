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

	//printf("binary representation of 4: %s\n", number_to_string(4,2));
	printf("binary representation of -4: %s\n", number_to_string(-4,2));
	printf("octal  representation of 8: %s\n", number_to_string(8,8));
	printf("Hexa  representation of 255: %s\n", number_to_string(255,16));
//printf("binary repestation of -4: %b\n",-4);
	return (0);
}
