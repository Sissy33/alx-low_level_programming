#include "main.h"

/**
 * factorial - Return the factorial of a number
 * @n: The number to calculate the factorial of 
 *
 * Return: The factorial of number, or -1 if an error occurs
 */

int factorial(int n)
{
	if (n < 0)
		return -1;

	if (n == 0)
		return 1;

	return * factorial(n - 1);
}
