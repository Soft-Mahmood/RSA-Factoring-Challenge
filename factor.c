#include "main.h"

/**
 * factor - facotrises a number into a product of two smaller numbers.
 * @n: is the number to factorise
 * Return: 0 if suceessful.
 *
 */

int factor(char *buffer)
{
	unsigned int i, j;

	j = atoi(buffer);

	for (i = 2; i <= j; i++)
	{
		if (j % i == 0)
		{
			printf("%d = %d * %d\n", j, j / i, i);
			break;
		}
		else
			continue;
	}
	return (0);
}
