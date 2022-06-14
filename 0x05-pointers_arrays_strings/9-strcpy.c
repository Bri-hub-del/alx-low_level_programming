#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - function for copying a string
 * @dest: the destination string where the string is copied to
 * @src: the source string to be copied
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
