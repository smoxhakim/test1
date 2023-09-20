#include "main.h"

/**
 * owned by: SmoxHakim
 * _strncpy - copy two strings
 * @dest: first input
 * @src: second input
 * @n: input number
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int x;

	for (x = 0; x < n && src[x]; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
	dest[x] = '\0';
	}
	return (dest);

}
