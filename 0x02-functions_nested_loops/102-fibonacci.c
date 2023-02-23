#include "main.h"

/**
 * print_fibonacci_50 - Prints the first 50 Fibonacci numbers.
 *
 * Return: void
 */
void print_fibonacci_50(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib3;
	int i;

	_putchar('1');
	for (i = 2; i <= 50; i++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(fib2 / 10 + '0');
		_putchar(fib2 % 10 + '0');
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}
	_putchar('\n');
}
