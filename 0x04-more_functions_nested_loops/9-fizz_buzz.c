#include "main.h"

/**
 * fizz_buzz - prints numbers from 1 to 100, but replaces multiples of 3 with Fizz
 * and multiples of 5 with Buzz. Multiples of both 3 and 5 are replaced with FizzBuzz.
 *
 * Return: void
 */
void fizz_buzz(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz ");
        else if (i % 3 == 0)
            printf("Fizz ");
        else if (i % 5 == 0)
            printf("Buzz ");
        else
            printf("%d ", i);
    }
    printf("\n");
}
