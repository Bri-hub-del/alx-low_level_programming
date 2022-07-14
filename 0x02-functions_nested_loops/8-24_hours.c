#include "main.h"
/**
 * jack_bauer - prints every minute of Jack Bauer's day
 *
 * Return: Always return 0
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
		_putchar((hr / 10) + '0');
		_putchar((hr % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
		}
	}
}
