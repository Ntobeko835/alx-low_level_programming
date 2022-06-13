#include "main.h"
/**
 * _strlen - string lenth
 * @s: parameter
 * Return: int
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
