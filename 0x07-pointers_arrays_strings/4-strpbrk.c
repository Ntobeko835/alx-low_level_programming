#include "main.h"
/**
 * _strbrk - searches a string for any of a set of bytes
 * @s: bytes of string
 * @accept: string to be searched
 * Return: Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found (soln)
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++;
		}

		s++;
	}
	return (0);
}
