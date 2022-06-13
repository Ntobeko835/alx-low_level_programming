#include "main.h"
/**
 * _strcpy - copies strings
 * @dest: parameter
 * @srs: parameter
 *Return: char
 */
char *_strcpy(char *dest, char *srs)
{
	int i;

	for (i = 0; *(srs + i) != '\0'; i++)
	{
		dest[i] = *(srs + i);
	}
	dest[i] = '\0';
	return (dest);
}
