#include <stdio.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the  main function
 *
 * Return: always 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand () - RAND_MAX / 2;
	/* code placed here */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else (n < 0)
	printf("\n")
	return (0);
}
