#include <stdio.h>

/**
 * main - Entry point
 * Return:1
 */

int main(void)
{
char c = 'z';

while (c >= 'a')
{
putchar (c);
c--;
}
putchar('\n');
return (0);
}
