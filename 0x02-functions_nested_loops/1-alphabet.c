#include "main.h"

/**
 * print_alphabet: Prints the alphabet in lowercase, followed by a new line
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
