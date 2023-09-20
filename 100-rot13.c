#include "main.h"

/**
 * owned by: SmoxHakim
 * rot13 - encodes a string
 * @str: input
 * Return: str
 */

char *rot13(char *str)
{
	int c = 0, x;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[c] != '\0')
	{
		for (x = 0; x < 52; x++)
		{
			if (s[c] == alph[x])
			{
				s[c] = rot13[x];
				break;
			}
		}
		c++;
	}

	return (str);
}
