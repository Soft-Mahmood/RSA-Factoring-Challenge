#include "factor.h"

/**
 * is_prime - checks if a number is prime.
 * @n: is the number to check.
 * Return: 0 if prime, 1 if not prime, and -1 on failure
 */

int is_prime(size_t n)
{
	size_t m;

	for (m = 2; m < n; m++)
	{
		if (n % m == 0)
		{	
			return (1);
			break;
		}
	}
	return (0);
}
