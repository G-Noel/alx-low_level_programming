#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
#define PASSWORD_LEN 63

/**
 * main - Generates random passwords for 101-crackme program
 * Return: Always 0
 */

int main(void)
{
	char password[PASSWORD_LEN + 1];
	int i, sum;

	/* Seed random number generator */
	srand(time(NULL));

	/* Generate random password */
	for (i = 0, sum = 0; sum < PASSWORD_LEN; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}

	/* Add null terminator */
	password[i] = '\0';

	/* Print password */
	printf("%s\n", password);

	return 0;
}
