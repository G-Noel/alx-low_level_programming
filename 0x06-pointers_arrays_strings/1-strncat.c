#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len])
		dest_len++;

	while (i < n && src[i])
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}

	return (dest);
}
