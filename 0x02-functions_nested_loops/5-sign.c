#include "main.h"
/**
 * print_sign - Prints the sign of number
 * @n: sign of the number
 * Return: 1 when n is greater than 0, 0 when n is zero, -1 n
 * is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
