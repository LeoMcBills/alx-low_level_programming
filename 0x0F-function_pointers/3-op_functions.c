#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - Return sum of two numbers.
 *@a: First parameter.
 *@b: Second parameter.
 *Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Return difference of two numbers.
 *@a: The first parameter
 *@b: The second parameter
 *Return: Difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Return product of two numbers.
 *@a: The first parameter
 *@b: The second parameter
 *Return: Product of a and b.
 */

int op_mul(int a, int b)
{

	return (a * b);

}

/**
 *op_div - Return division of two numbers.
 *@a: The first parameter
 *@b: The second parameter
 *Return: Quotient of a and b.
*/

int op_div(int a, int b)
{

	return (a / b);

}

/**
 *op_mod - Return remainder of the division of two numbers.
 *@a: The first parameter.
 *@b: The second parameter.
 *Return: Remainder of the division of a by b.
*/

int op_mod(int a, int b)
{

	return (a % b);

}
