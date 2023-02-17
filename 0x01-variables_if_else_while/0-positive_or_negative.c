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
printf(" is positive");
}
else if (n < 0)
{
printf("%ld", n);
printf(" is negative");
}
else
{
printf("%ld", n);
printf(" is zero");
}
return (0);
}
