#include "calc.h"

/**
 * add - addition function
 * @a: first num
 * @b: second num
 * Return: sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtraction function
 * @a: first num
 * @b: second num
 * Return: difference
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multilpication function
 * @a: first num
 * @b: second num
 * Return: product
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - division function
 * @a: first num
 * @b: second num
 * Return: quotient
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: dividing by zero!\n");

		return (ERROR);
	}
	else
		return (a / b);
}

/**
 * mod - division function
 * @a: first num
 * @b: second num
 * Return: remainder
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: dividing by zero!\n");

		return (ERROR);
	}
	else
		return (a % b);
}
