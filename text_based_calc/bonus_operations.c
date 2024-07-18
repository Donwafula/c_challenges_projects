#include "calc.h"
/**
 * sq_root - square root function
 * @n: number to do operation on
 * Return: square root
 */
double sq_root(int n)
{
	double root = 0.00/*, sub = 1*/;

	/*for (sub = 1; sub <= n; sub += 2)*/
	/*{*/
	/*	if (n >= 0)*/
	/*	{*/
	/*		n -= sub;*/
	/*		root++;*/
	/*	}*/
	/*	else*/
	/*		break;*/
	/*}*/
	return (sqrt(n));
}

/**
 * logA - logarithm function
 * @n: number
 * @base: base
 * Return: log(base) n
 */
double logA(double n, double base)
{
	return ((log(n) / log(base)));
}

/**
 * rootLog - Function to call squareroot and logarithm function
 * @c: operation to perform
 */
void rootLog(char c)
{
	double a, base;

	if (c == 'r')
	{
		printf("Enter number to find square root of: ");
		if (!scanf("%lf", &a) || a < 0)
		{
			printf("Error: parameter is invalid\n");
			while (getchar() != '\n')
				;
			return;
		}
		else
			printf("Result: %.2f\n\n", sq_root(a));
	}
	else if (c == 'l')
	{
		printf("Enter number to find logarithm of: ");
		if (!scanf("%lf", &a) || a < 0)
		{
			printf("Error: parameter is invalid\n");
			while (getchar() != '\n')
				;
			return;
		}
		printf("Enter log base: ");
		if (!scanf("%lf", &base) || base < 0)
		{
			printf("Error: parameter is invalid\n");
			while (getchar() != '\n')
				;
			return;
		}
		else
			printf("Result: %.2f\n\n", logA(a, base));
	}
}
