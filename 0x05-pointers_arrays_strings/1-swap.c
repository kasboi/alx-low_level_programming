#include "main.h"
/**
 * swap_int - swap values of 2 integers.
 * @a: input integer a.
 * @b: input integer b.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int hol = *a;
	*a = *b;
	*b = hol;
}
