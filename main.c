#include "main.h"

/**
 * main - calls the factorise function
 * @argc: is the argument vector
 * @argv: is the argument count
 * Return: 0 on success and 1 on failure.
 */

int main(int argc, int *argv)
{

	if (argc != 2)
	{
		printf("Usage: ./factor number\n");
		return(1);
	}
	

	factor(argv[1]);
	return (0);
}
