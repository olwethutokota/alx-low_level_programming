#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: always 0
 */

int main(void)
{
int x = 0;

for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}

putchar('\n');

return (0);
}
