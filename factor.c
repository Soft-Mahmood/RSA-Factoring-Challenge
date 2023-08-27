#include "main.h"

/**
 * factor - facotrises a number into a product of two smaller numbers.
 * @n: is the number to factorise
 * Return: 0 if suceessful.
 *
 */

int factor(int n)
{
	int i, j;

	j = 0;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			j = n / i;
			printf("%d = %d * %d\n", n, i, j);
		}
		else
			continue;
	}
	return (0);
}
