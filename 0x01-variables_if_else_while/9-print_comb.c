
#include <stdio.h>

/**
 * main - Print From 0 to 9 in put
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
}

	putchar('\n');
	return (0);
}
