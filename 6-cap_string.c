#include "main.h"

/**
 * owned by: SmoxHakim
 * cap_string - capitalizes all words of a string
 * @str: input 
 * Return: str
 */

char *cap_string(char *str)
{
	int c = 0, x;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[c] >= 97 && s[c] <= 122)
		s[c] = s[c] - 32;
	c++;
	while s[c] != '\0')
	{
		for (x = 0; x < 13; x++)
		{
			if (s[c] == sep[x])
			{
				if (s[c + 1] >= 97 && s[c + 1] <= 122)
					s[c + 1] = s[c + 1] - 32;
				break;
			}
		}
		count++;
	}
	return (str);
}
