#include "grades.h"

/**
 * _strlen - function to calculate leght of a string
 * @c: string to check
 * Return: lenght of the string
 */
int _strlen(char *c)
{
	int a = 0, len = 0;

	for (a = 0; c[a] != '\0'; a++)
		len++;

	return (len);
}

/**
 * _atoi - custom function to convert string to integer
 * @c: string to convert
 * Return: integer
 */
int _atoi(char *c)
{
	int index = 0, sign = 1, bre_ak = 0, result = 0;

	if (c == NULL)
		return (-1);
	while (c[index] != '\0')
	{
		if (c[index] == '-')
			sign *= -1;
		while (c[index] > 47 && c[index] < 58)
		{
			result = (result * 10) + (c[index] - 48);
			bre_ak = 1;
			index++;
		}
		if (bre_ak == 1)
			break;
		index++;
	}
	result *= sign;
	return (result);
}

