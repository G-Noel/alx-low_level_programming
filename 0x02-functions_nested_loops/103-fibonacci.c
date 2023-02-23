#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    long int a = 0, b = 1, c = 0, sum = 0;

    while (c <= 4000000)
    {
        c = a + b;
        a = b;
        b = c;
        if (c % 2 == 0)
            sum += c;
    }

    printf("%ld\n", sum);

    return (0);
}
