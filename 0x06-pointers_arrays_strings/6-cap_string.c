#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: The capitalized string.
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize the first letter if necessary */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 'a' - 'A';

	/* Capitalize all subsequent letters after separators */
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			switch (str[i - 1])
			{
				case ' ':
				case '\t':
				case '\n':
				case ',': case ';':
				case '.': case '!':
				case '?': case '\"':
				case '(': case ')':
				case '{': case '}':
					str[i] -= 'a' - 'A';
			}
		}
	}

	return (str);
}
