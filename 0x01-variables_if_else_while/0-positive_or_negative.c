#include <stdio.h>

/**
 * main - Guess What !!??  This is a Description
 * Return: 0 (Success)
 */

int main(void)
{
int n;
scanf("%d", &n);
if (n > 0)
{
printf("%d", n);
printf(" is positive");
}
else if (n < 0)
{
printf("%d", n);
printf(" is negative");
}
else
{
printf("%d", n);
printf(" is zero");
}
return (0);
}
