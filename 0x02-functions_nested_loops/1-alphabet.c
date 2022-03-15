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

	void print_alphabet(void)
	{
		for (c = 'A'; c <= 'Z'; c++)
			_putchar(c);
		_putchar('\n');
	}
	print_alphabet();
	return (0);
}
