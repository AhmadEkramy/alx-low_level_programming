#include <stdio.h>
#include <unistd.h>
/**
 * main - Print Alphabet Except e and q
 * Return: Always 0 (success)
 */
int main(void)
{
int alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'e')
{
continue;
}
else if (alphabet == 'q')
{
continue;
}
putchar(alphabet);
}
putchar('\n');
return (0);
}
