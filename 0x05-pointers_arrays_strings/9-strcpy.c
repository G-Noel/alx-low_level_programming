#include "main.h"

/**
 * _strcpy - copy string pointed to by src, including null byte, to buffer
 * @dest: buffer to copy string into
 * @src: string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
