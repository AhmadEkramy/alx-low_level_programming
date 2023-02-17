#include <stdio.h>
#include <unistd.h>
/**
 * main - Print Numbers From 0 To 10
 * Return: Always 0 (success)
 */
int main(void)
{
int numbers;

for (numbers = 0; numbers <= 9; numbers++)
{
printf("%d", numbers);
}
putchar('\n');
return (0);
}
