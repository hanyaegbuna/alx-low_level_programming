#include "main.h"

/**
 * _strlen - checks string length
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
