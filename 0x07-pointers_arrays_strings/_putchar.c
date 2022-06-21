#include <unistd.h>
/**
 * _putchar - writes c to stdout
 * @c: input character
 * Return: 1 if successful
 * on error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
