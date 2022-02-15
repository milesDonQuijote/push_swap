#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*last;
	t_stack	*second;

	last = (*stack)->prev;
	second = (*stack)->next;
	(*stack)->next = second->next;
	(*stack)->prev = second;
	last->next = second;
	second->next->prev = *stack;
	second->prev = last;
	second->next = *stack;
	*stack = second;
}

void	sa(t_stack **a)
{
	swap(a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_stack **b)
{
	swap(b);
	ft_putendl_fd("sb", 1);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_putendl_fd("ss", 1);
}
