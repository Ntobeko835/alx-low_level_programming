#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter, either lowercase or uppercase
 *
 * @c: The int to print
 * Return: Always 0
 */

int _isaplha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}