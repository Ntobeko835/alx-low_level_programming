#include "main.h"
/**
 * _isdigit - checks for digital values
 * @c: is a parameter
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
