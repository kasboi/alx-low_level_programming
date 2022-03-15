#include "main.h"
/**
 * print_alphabet - prints _putchar
 *
 * Description: prints alphabetic order
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
		_putchar(c);
	_putchar('\n');
}
