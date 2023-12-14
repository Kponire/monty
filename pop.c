#include "monty.h"

/**
 * _pop - prints all the values on the stack,
 * starting from the top of the stack
 * @stack: double pointer to the struct stack
 * @line_number: the line counter of the stack
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *nodo = *stack;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = nodo->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(nodo);
}
