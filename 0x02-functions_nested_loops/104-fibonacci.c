#include "main.h"

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
    unsigned long int i, num1 = 1, num2 = 2, next;

    _putchar('1');
    _putchar(',');
    _putchar(' ');
    _putchar('2');
    _putchar(',');
    _putchar(' ');

    for (i = 3; i <= 98; i++)
    {
        next = num1 + num2;
        _putchar(next + '0');

        if (i != 98)
        {
            _putchar(',');
            _putchar(' ');
        }

        num1 = num2;
        num2 = next;
    }

    _putchar('\n');
}
