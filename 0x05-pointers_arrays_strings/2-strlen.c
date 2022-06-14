#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: the string to be evaluated
 * Return: not
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
