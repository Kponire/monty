#include "monty.h"

/**
 * _add - adds two stacks together
 * @stack: double pointer to the struct stack
 * @line_number: the line counter of the stack
 */

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int result = 0, i = 0;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (stack == NULL || (*stack)->next == NULL || i <= 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = (*stack)->next->n + (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n = result;
}
