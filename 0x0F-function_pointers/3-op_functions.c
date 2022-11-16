#include "3-calc.h"

/**
 *op_add - adds two numbers
 *@a: first number
 *@b: second number
 *
 *Return: addition of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subracts two numbers
 *@a: first number
 *@b: second number
 *
 *Return: subraction of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers
 *@a: first number
 *@b: second number
 *
 *Return: multiplication of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two numbers
 *@a: first number
 *@b: second number
 *
 *Return: division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - modulus of two numbers
 *@a: first number
 *@b: second number
 *
 *Return: remainder of division between the two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
