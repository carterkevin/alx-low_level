#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the characterc to stdout
 * @c: the character to print
 *
 * Return: onsuccess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
