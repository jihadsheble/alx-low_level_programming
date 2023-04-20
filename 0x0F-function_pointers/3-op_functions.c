#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the subtraction of 2 numbers.
* @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the multiplication of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of 2 numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
