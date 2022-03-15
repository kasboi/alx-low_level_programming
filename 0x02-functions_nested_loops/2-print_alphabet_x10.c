#include "main.h"
/**
 * print_alphabet_x10 - prints _putchar
 *
 * Description: prints alphabetic order 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c = 0;

	while (c < 10)
	{
		char g;

		for (g = 'a'; g <= 'z'; g++)
		{
			_putchar(g);
		}
		_putchar('\n');
	}
}
