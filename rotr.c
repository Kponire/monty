#include "monty.h"


/**
 * _rotr - rotates the stack to the bottom.
 * @stack: double pointer to the struct stack
 * @line_number: the line counter of the stack
 */

void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *runner = *stack;

	int aux1 = 0;

	if (!line_number || !stack || !*stack || !(*stack)->next)
		return;
	while (runner->next)
		runner = runner->next;
	aux1 = runner->n;
	while (runner->prev)
	{
		runner = runner->prev;
		runner->next->n = runner->n;
	}
	runner->n = aux1;
}
