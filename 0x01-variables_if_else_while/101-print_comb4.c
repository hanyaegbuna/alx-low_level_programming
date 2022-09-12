#include <stdio.h>

#include <unistd.h>

/**
 * main - Prints 3 combination of number
 * Return: Always (Success)
 */

int main(void)
{
	int j, k, l;

	for (j = '0'; j <= '9'; j++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				if (j < k && k < l)
				{
					putchar(j);
					putchar(k);
					putchar(l);

					if (j != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
