#include "monty.h"
global_var var_global;

void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
	stack_t *stack = NULL;

	if (argc != 2)
		error_usage();
	read_file(av[1], &stack);
	free_dlistint(stack);
	return (0);
}
