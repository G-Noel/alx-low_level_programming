/* main.h */
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_fibonacci(int n);

#endif /* MAIN_H */

/* 104-fibonacci.c */
#include "main.h"

/**
 * print_fibonacci - prints the first n Fibonacci numbers
 * @n: the number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
    int i;
    unsigned long int a = 1, b = 2, c;

    if (n >= 1)
        _putchar('1');
    if (n >= 2)
        _putchar(',');
        _putchar(' ');
    for (i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%lu", c);
        if (i != n)
            _putchar(',');
            _putchar(' ');
    }
    _putchar('\n');
}

int main(void)
{
    print_fibonacci(98);
    return (0);
}
