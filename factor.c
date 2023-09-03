#include "factor.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Return: int
 */
int factorize(char *buffer)
{
	size_t num;
	size_t i, j;

	num = atoi(buffer);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			j = num / i;
			if ((is_prime(i) == 0) && (is_prime(j) == 0))
			{
				printf("%ld=%ld*%ld\n", num, j, i);
				break;
			}
			else
			{
				printf("no prime numbers found\n");
				break;
			}
		}
		else 
			continue;
	}

	return (0);
}
