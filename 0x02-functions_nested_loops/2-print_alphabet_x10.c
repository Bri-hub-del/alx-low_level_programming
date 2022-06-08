#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: Always return 0
 */
void print_alphabet_x10(void)
{
	int lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase(10));
	}
	_putchar('\n');
}
