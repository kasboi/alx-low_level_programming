#include "main.h"
/**
 * main - prints _putchar
 *
 * Description: prints alphabetic order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
		_putchar(c);
	_putchar('\n');
	return (0);
}
