#include "factor.h"

/**
 * main - main func
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *fptr;
	char *buffer = NULL;
	ssize_t line;
	size_t count;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: ./factor file\n");
		exit(EXIT_FAILURE);
	}

	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((line = getline(&buffer, &count, fptr)) != -1)
	{

		factorize(buffer);
	}

	free(buffer);
	fclose(fptr);
	return (0);
}
