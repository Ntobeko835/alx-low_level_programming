#include "main.h"
/**
 * _strncat - concanates two strings
 * @dest: it is a pointer to a changing character
 * @src: it is a pointer to a changing character
 * @n: value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
