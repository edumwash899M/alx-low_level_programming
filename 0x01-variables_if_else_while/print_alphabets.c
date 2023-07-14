#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main()
{
    char lowercase;
    char uppercase;

    lowercase = 'a';
    uppercase = 'A';

    while (lowercase <= 'z')
    {
        putchar(lowercase);
        lowercase++;
    }

    while (uppercase <= 'Z')
    {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n');

    return 0;
}
