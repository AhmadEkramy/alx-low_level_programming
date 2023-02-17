#include <stdio.h>

/**
 * main - Guess What !!??  This is a Description
 * Return: 0 (Success)
 */

int main(void)
{
long int n;
scanf("%ld", &n);
if (n > 0)
{
printf("%ld", n);
printf(" is positive\n");
}
else if (n < 0)
{
printf("%ld", n);
printf(" is negative\n");
}
else
{
printf("%ld", n);
printf(" is zero\n");
}
return (0);
}
