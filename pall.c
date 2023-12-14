#include "monty.h"

/**
 * _pall - prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: double pointer to the struct stack
 * @line_number: the line counter of the stack
 */

void _pall(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *runner;

	runner = *stack;
	while (runner != NULL)
	{
		printf("%d\n", runner->n);
		runner = runner->next;
	}
}
