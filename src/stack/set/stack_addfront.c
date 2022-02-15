#include "push_swap.h"

void	stack_addfront(t_stack **stack, int index)
{
	stack_addback(stack, index);
	*stack = (*stack)->prev;
}
