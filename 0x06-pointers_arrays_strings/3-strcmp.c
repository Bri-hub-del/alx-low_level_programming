#include "main.h"
/**
 * _strcmp -  function compares two strings
 * @s1: first string
 * @s2: second string
 * Return: +ve, 0, or -ve integer if s1 is less than,
 * greater than or equal to s2
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (diff == 0)
	{
		diff = *s1 - *s2;

		/*break if one of the stings is empty */
		if (*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	return (diff);
}
