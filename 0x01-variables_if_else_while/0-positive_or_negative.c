#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Guess What !!??  This is a Description
 * Return: 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
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
