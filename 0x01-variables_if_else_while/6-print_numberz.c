#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that prints all single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
