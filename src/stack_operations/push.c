#include "push_swap.h"

void	push(t_stack **from, t_stack **to)
{
	t_stack	*last;
	t_stack	*pushed;

	pushed = *from;
	*from = (*from)->next;
	(*from)->prev = pushed->prev;
	pushed->prev->next = *from;
	if (!*to)
	{
		*to = pushed;
		pushed->prev = pushed;
		pushed->next = pushed;
		return ;
	}
	last = (*to)->prev;
	(*to)->prev = pushed;
	pushed->next = *to;
	pushed->prev = last;
	last->next = pushed;
	*to = pushed;
}

void	pa(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_putendl_fd("pa", 1);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_putendl_fd("pb", 1);
}
