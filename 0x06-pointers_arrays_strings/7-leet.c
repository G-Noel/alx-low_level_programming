#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char *str = s;
	int i, j;

	char leet[] = {'4', '3', '0', '7', '1'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}
	return str;
}
