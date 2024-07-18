#include "calc.h"

/**
 * loop - Function to get input and perform operations
 */
void loop(void)
{
	int a, b;
	char c = '\0';

	while (c != 'q')
	{
		interface();
		scanf(" %c", &c);
		if (c == 'q')
		{
			printf("Exiting the calculator. Goodbye!\n");
			continue;
		}
		else if (c == '+' || c == '-' || c == '*' || c == 'r' || c == 'l')
		{
			if (c == 'r' || c == 'l')
			{
				rootLog(c);
				continue;
			}
			else
			{
				printf("Enter two operands separated by a space: ");
				scanf("%d %d", &a, &b);
				swi_tch(a, b, c);
			}
		}
		else if (c == '/' || c == '%' || c == '^')
		{
			printf("Enter two operands separated by a space: ");
			scanf("%d %d", &a, &b);
			swi_tch(a, b, c);
		}
		else/*(c!='+' && c!='-' && c!='*' && c!='/' && c!='%' && c!='^')*/
		{
			printf("'%c':/ Error: Invalid. Enter a valid operation\n\n", c);
			continue;
		}
	}
}

/**
 * swi_tch - function to call all operations
 * @a: first number
 * @b: second number
 * @c: operation
 */
void swi_tch(int a, int b, char c)
{
	int result;

	switch (c)
	{
		case '+':
			result = add(a, b);
			break;

		case '-':
			result = sub(a, b);
			break;

		case '*':
			result = mul(a, b);
			break;

		case '/':
			result = div(a, b);
			break;

		case '%':
			result = mod(a, b);
			break;

		case '^':
			result = expo(a, b);
			break;

		default:
			printf("Error in switching operations\n");
			return;
	}
	if (result == ERROR && (c == '/' || c == '%'))
	{
		if (b == 0)
			return;
	}

	printf("Result: %d\n\n", result);
}

/**
 * expo - exponentiation function
 * @a: first num
 * @b: second num
 * Return: a raised to power b
 */
int expo(int a, int b)
{
	int i = 0, result = 1;

	for (i = 0; i < b; i++)
		result *= a;

	return (result);
}
