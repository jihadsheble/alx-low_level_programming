#include "main.h"

/*
 * positive or negative - determine if the number positive or negative or zero
 * Return - 0
 */

void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative", i);
}
else if (i == 0)
{
printf("%d is zero", i);
}
else if (i > 0)
{
printf("%d is positive", i);
}
printf("\n");
}
