#include "push_swap.h"

void	sort_triple(t_stack **stack)
{
	if (issorted(*stack) || stack_len(*stack) != 3)
		return ;
	if ((*stack)->index == get_atindex(*stack,
				get_min(*stack, 3))->index)
	{
		sa(stack);
		ra(stack);
	}
	else if ((*stack)->index == get_atindex(*stack,
				get_max(*stack, 3))->index)
	{
		if ((*stack)->next->index == get_atindex(*stack,
					get_min(*stack, 3))->index)
			ra(stack);
		else
		{
			sa(stack);
			rra(stack);
		}
	}
	else
	{
		if ((*stack)->next->index < (*stack)->index)
			sa(stack);
		else
			rra(stack);
	}
}
