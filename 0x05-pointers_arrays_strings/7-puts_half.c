#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int length = 0, i;

	/* Find the length of the string */
	while (str[length] != '\0')
		length++;

	/* Print the second half of the string */
	for (i = (length + 1) / 2; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
