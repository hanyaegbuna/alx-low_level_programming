#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	
		_putchar(s[i]);
	}
	_putchar('\n');
}
