#include "main.h"

/**
 * owned by: SmoxHakim
 * string_toupper - change characters
 * @char *: input
 *
 * Return: cha
*/

char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
	}
	return (str);
}
