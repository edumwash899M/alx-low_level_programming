#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints a message to indicate an infinite loop, then
 * avoids the loop by commenting out the problematic code.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/**
* while (i < 10)
* {
*     putchar(i);
*     i++;
* }
*/

printf("Infinite loop avoided! \\o/\n");

return (0);
}
