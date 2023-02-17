#include <stdio.h>
#include <unistd.h>
/**
 * main - Print Alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
        int alphabet;

        for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
        {
                putchar(alphabet);
        }
        putchar('\n');
return (0);
}
