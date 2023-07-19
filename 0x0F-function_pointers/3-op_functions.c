#include "3-calc.h"

/**
 * op_add - compute the sum of two int
 * @x: integer x
 * @y: integer y
 *
 * Return: return sum of x and y
 */
int op_add(int x, int y)
{
	return (x + y);
}

/**
 * op_sub - compute the difference of two int
 * @x: integer x
 * @y: integer y
 *
 * Return: return difference of x and y
 */
int op_sub(int x, int y)
{
	return (x - y);
}

/**
 * op_mul - compute the product of two int
 * @x: integer x
 * @y: integer y
 *
 * Return: return product of x and y
 */
int op_mul(int x, int y)
{
	return (x * y);
}

/**
 * op_div - compute the division of two int
 * @x: integer x
 * @y: integer y
 *
 * Return: return division of x and y
 */
int op_div(int x, int y)
{
	return (x / y);
}

/**
 * op_mod - compute the remainder of the division of two int
 * @x: integer x
 * @y: integer y
 *
 * Return: result remainder of x divided y
 */
int op_mod(int x, int y)
{
	return (x % y);
}
