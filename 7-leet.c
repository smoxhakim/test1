#include "main.h"

/**
 * owned by: SmoxHakim
 * leet - encodes a string
 * @str: imput string
 * Return: str
 */
char *leet(char *str)
{
	int x, y;
	char alph[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (x = 0; s[x]; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (alph[y] == str[x])
				str[x] = num[y];
		}
	}
	return (str);
}
