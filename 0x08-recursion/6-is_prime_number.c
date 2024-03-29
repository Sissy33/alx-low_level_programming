#include "main.h"

/**
 * is_prime_helper -Recursive helper function to check if a number is prime
 * @n: The number to check for primality
 * @divisor: The current divisor to check divisibility
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (n < 2)
		return (0);
	else if (divisor * divisor > n)
		return (1);
	else if (n % divisor == 0)
		return (0);
	else
		return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Check if a number is prime
 * @n: The number to check for primality
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
