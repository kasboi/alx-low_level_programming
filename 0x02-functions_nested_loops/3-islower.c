#include "main.h"

/**
* _islower - print _putchar.
*
* c - the alphabet.
* Return: success always.
*/
int _islower(int c)
{
	int n;
	int val = ("%d", c);

	for (n = 97; n <= 122; n++)
	{
		if (c == val)
			return (1);
	}
	return (0);
}
