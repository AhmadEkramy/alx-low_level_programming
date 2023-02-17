#include <stdio.h>
#include <unistd.h>
/**
 * main - Print Alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	int loweralphabet, ubberalphabet;

	for (loweralphabet = 'a'; loweralphabet <= 'z'; loweralphabet++)
	{
		putchar(loweralphabet);
	}
	for (ubberalphabet = 'A'; ubberalphabet <= 'Z'; ubberalphabet++)
	{
		putchar(ubberalphabet);
	}
	putchar('\n');
return (0);
}
