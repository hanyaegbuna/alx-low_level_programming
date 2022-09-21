#include "main.h"
#include <stdio.h>

/**
 * print_array - prints `n` elements of an array of integers
 * @a: pointer to an int type array
 * @n: Array to be printed
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
}
