#include "main.h"
/**
 * _strlen - print length of string.
 * @s: input.
 * Return: none
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
