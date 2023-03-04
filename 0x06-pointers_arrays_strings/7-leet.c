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
	char *p = s;
	char *letters = "aAeEoOtTlL";
	char *nums = "4433007711";
	int i, j;

	while (*p)
	{
		i = 0;
		while (letters[i])
		{
			if (*p == letters[i])
			{
				*p = nums[i];
				break;
			}
			i++;
		}
		p++;
	}

	return s;
}
