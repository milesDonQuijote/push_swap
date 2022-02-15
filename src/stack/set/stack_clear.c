#include "push_swap.h"

void	stack_clear(t_stack **stack, size_t size)
{
	t_stack	*tmp;

	if (!stack || !*stack)
		return ;
	while (size--)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = 0;
}
