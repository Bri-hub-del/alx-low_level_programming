#include "main.h"
/**
 * reverse_array - function reverses an array of integers
 * @a: the array in discussion
 * @n: integers in the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int b;
	int temp;

	for (b = 0; b < n--; b++)
	{
		temp = a[b];
		a[b] = a[n];
		a[n] = temp;
	}
}
