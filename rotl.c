#include "monty.h"

/**
 * _rotl - rotates the stack to the top.
 * @stack: double pointer to the struct stack
 * @line_number: the line counter of the stack
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *runner = *stack;


	int aux1 = 0;

	if (!line_number || !stack || !*stack || !(*stack)->next)
		return;

	aux1 = runner->n;

	while (runner->next)
	{
		runner = runner->next;
		runner->prev->n = runner->n;
	}

	runner->n = aux1;
}
