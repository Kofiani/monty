#include monty.h
/**
 * _nop - literally does nothing
 * @stack: pointer to the top of the stack
 * @line_number: the index of the current line
 */

void _nop(__attribute__ ((unused))stack_t **stack,
	  __attribute__ ((unused))unsigned int line_number)
{
	;
}

/**
 * _pchar - prints the ASCII value of a number
 * @stack: pointer to the top of the stack
 * @line_number: the index of the current line
 */

void _pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *runner;
	int val;

	if (*stack == NULL)
	{
		printf("L%d: can't pchar, stack empty\n", line_number);
		error_exit(stack);
	}

	runner = *stack;
	val = runner->n;

	if (!isprint(val))
	{
		printf("L%d: can't pchar, value out of range\n", line_number);
		error_exit(stack);
	}

	putchar(val);
	putchar('\n');
}
