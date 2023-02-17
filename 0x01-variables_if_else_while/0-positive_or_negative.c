#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Guess What !!??  This is a Description
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
scanf("%d", &n);
if (n > 0)
{
printf("%d", n);
printf(" is positive\n");
}
else if (n < 0)
{
printf("%d", n);
printf(" is negative\n");
}
else
{
printf("%d", n);
printf(" is zero\n");
}
	return (0);
}



