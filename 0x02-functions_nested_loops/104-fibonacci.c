#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - prints the first n Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * @n: the number of Fibonacci numbers to print
 *
 * Return: void
 */
void print_fibonacci(int n)
{
    int i;
    unsigned long a = 1, b = 2, c;

    if (n < 1)
        return;

    printf("%lu", a);

    for (i = 2; i <= n; i++)
    {
        printf(", %lu", b);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
}
