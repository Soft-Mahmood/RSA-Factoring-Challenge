#include "main.h"

/**
 * main - calls the factorise function
 * @argc: is the argument vector
 * @argv: is the argument count
 * Return: 0 on success and 1 on failure.
 */

int main(int argc, char *argv[])
{
	FILE *fptr;
	size_t count;
	ssize_t line;
	char *buffer = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: ./factor number\n");
		exit(EXIT_FAILURE);
	}
	
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while((line = getline(&buffer, &count, fptr)) != -1)
	{

		factor(buffer);
	}
	return (0);
}
