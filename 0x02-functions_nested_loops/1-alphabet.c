#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
char c;

for (i = 0; i < 26; i++)
{
c = i + 'a';
_putchar(c);
}
_putchar('\n');
return (0);
}
