#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c in stdout
 * @c: the character to print
 *
 * Return: on Success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
