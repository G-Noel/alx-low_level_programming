#include "main.h"
#include <stdio.h>

/**
 * largest_prime_factor - finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: void
 */

void largest_prime_factor(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (i = 3; i <= n; i += 2)
	{
		while (n % i == 0 && i != n)
		{
			n /= i;
		}
	}

	printf("%lu\n", n);
}
