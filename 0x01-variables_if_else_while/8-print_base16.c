#include <stdio.h>
#include <unistd.h>
/**
 * main - Print Numbers From 0 To 10
 * Return: Always 0 (success)
 */
int main(void)
{
int numbers;
char hexa;
for (numbers = 0; numbers <= 9; numbers++)
{
printf("%d", numbers);
}
for (hexa = 'A'; hexa <= 'F'; hexa++)
{
printf("%c", hexa);
}
putchar('\n');
return (0);
}
