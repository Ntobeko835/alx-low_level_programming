#include <unistd.h>
/**
 * _putchar - writes the the character c
 * @c: The printed character
 * Return: on success 1
 * on error, -1 is returned, and errno is appropriately set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
