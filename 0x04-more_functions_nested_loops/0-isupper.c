#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: is a parameter
 * Return: 0 if it is a success
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
