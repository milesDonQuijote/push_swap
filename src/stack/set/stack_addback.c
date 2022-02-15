#include "push_swap.h"

void	stack_addback(t_stack **stack, int index)
{
	t_stack	*last;
	t_stack	*new;

	if (!stack)
		return ;
	new = new_element(index);
	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	last = (*stack)->prev;
	(*stack)->prev = new;
	new->next = *stack;
	new->prev = last;
	last->next = new;
}
