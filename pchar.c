#include "monty.h"

/**
 * _pchar - prints the char at the top of the stack, followed by a new line.
 * @stack: double pointer to the struct stack
 * @line_number: the line counter of the stack
 */

void _pchar(stack_t **stack, unsigned int line_number)
{
	int val;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free(var_global.buffer);
		fclose(var_global.file);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	val = (*stack)->n;
	if (val > 127 || val < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free(var_global.buffer);
		fclose(var_global.file);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	putchar(val);
	putchar('\n');
}
