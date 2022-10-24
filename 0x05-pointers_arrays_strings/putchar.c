#include <uninstd.h>

/**
 * _printchar - writes character c to stdout
 * @c char clear to be printed
 * Return: 0n success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
