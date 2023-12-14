#include "monty.h"
global_var var_global;

void error_usage(void);

/**
 * main - the main function
 * @argc: the number for arguments
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_file(argv[1], &stack);
	free_stack(stack);
	return (0);
}

/**
 * error_usage - prints out the error
 */

void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
