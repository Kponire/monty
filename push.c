#include "monty.h"

/**
 * _push - pushes an element to the stack.
 * @stack: double pointer to the struct stack
 * @line_number: the line counter of the stack
 */

void _push(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *top;
	(void)line_number;

	top = malloc(sizeof(stack_t));
	if (top == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	top->n = var_global.push_arg;
	top->next = *stack;
	top->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = top;
	*stack = top;
}
