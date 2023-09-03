#include "factor.h"

void main()
{
	size_t n;

	for (n = 2; n < 50; n++)
	{
		if (is_prime(n) == 0)
		{
			printf("%ld is prime\n", n);
		}
		else
		{
		printf("%ld is not prime\n", n);
		}
	}
}
