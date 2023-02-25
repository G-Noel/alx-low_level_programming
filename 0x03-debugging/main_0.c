#include <stdio.h>
#include "myheader.h" /* include header file */

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2020;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	/* call function */
	print_remaining_days(month, day, year);

	return (0);
}
