#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Generates random passwords for 101-crackme program
 * Return: Always 0
 */

int main(void)
{
	int sum = 0, diff_half = 0, n = 0;
	char *password;
	int i;

	srand(time(NULL));
	password = malloc(sizeof(char) * 100);
	while (sum < 2772 - 122)
	{
		n = rand() % 78 + 48;
		password[sum] = n;
		sum += n;
	}
	diff_half = (2772 - sum) / 2;
	password[sum - 1] = diff_half;
	password[sum] = diff_half;
	password[sum + 1] = '\0';

	for (i = 0; i < sum; i++)
		password[i] = password[i] + i % 10;

	printf("%s", password);
	free(password);
	return (0);
}
