#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a = 9;

while (a <= 0)
{
putchar(a + '0');
a--;
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
