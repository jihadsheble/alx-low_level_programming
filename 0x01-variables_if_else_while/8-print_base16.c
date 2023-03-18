#include <stdio.h>
/**
 * main - a program that prints the alphabits
 * Return: 0 (Success)
 */
int main(void)
{
int c;
char n;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (n = 'a'; n <= 'f'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
