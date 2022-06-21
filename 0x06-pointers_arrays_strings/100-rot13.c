#include "main.h"
/**
 * rot13 - encodes a string rot13
 * @s: input string
 * Return: pointer dest
 */
char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 56; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
