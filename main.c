#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
	int len;

	len = _printf("Hey Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("lenght:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);

	return (0);
}
