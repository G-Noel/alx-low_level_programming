#include "main.h"
#include <unistd.h>
/**
 * _putchar -writes the character c to standout
 * @c: the charcter to print
 *
 * Return: on success 1
 * On erro, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}