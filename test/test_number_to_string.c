#include "../holberton.h"
#include <stdio.h>
int main()
{
	char *p = number_to_string(156001);
	printf("%s\n", p);
	free(p);
	return (0);
}
