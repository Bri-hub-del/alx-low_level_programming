#include <stdio.h>

/**
 * printf("Infinite loop incomig : ('\n'); - There is a missing terminating character before "
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incomig : ('\n');
	i = 0;
	while (i < 10)
	{
	putchar(i);
	}
	printf("Infinite loop avoided !\\o / \n");
	return (0);
}
