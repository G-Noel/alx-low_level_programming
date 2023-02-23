#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - prints the first n Fibonacci numbers
 * @n: the number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	unsigned long int a = 1, b = 2, c;
	int i;

	if (n >= 1)
		printf("%lu", a);
	if (n >= 2)
		printf(", %lu", b);
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
}
