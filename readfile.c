#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_file - reads the code from the given file
 * @filename: the given file
 * @stack: double pointer to the struct stack
 */

void read_file(char *filename, stack_t **stack)
{
	char *line;
	size_t i = 0;
	int line_count = 1, check;
	instruct_func s;
	ssize_t read;

	var_global.file = fopen(filename, "r");
	if (var_global.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&var_global.buffer, &i, var_global.file)) != -1)
	{
		line = parse_line(var_global.buffer, stack, line_count);
		if (line == NULL || line[0] == '#')
		{
			line_count++;
			continue;
		}
		s = get_op_func(line);
		if (s == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_count, line);
			exit(EXIT_FAILURE);
		}
		s(stack, line_count);
		line_count++;
	}
	free(var_global.buffer);
	check = fclose(var_global.file);
	if (check == -1)
		exit(-1);
}
