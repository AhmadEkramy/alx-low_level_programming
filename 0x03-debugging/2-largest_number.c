#include "holberton.h"

/**
 * largest_number - Largest 3 Numbers
 * @a: First No.
 * @b: Second No.
 * @c: Third No.
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	else if (c > b)
	{
		largest = c;
	}

	return (largest);
}
