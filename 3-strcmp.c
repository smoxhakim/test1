#include "main.h"

/**
 * owned by: SmoxHakim
 * _strcmp -compare two strings
 * @dest: first input
 * @src: second input
 *
 * Return: dest
*/

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
