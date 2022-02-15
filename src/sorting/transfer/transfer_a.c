#include "push_swap.h"

static int	min_step(t_stack *stack, t_stack **tmp, size_t size)
{
	int	idx;
	int	p_idx;
	int	step;
	int	b_step;

	idx = 0;
	p_idx = 0;
	*tmp = stack;
	step = stack->steps;
	while (idx < size)
	{
		b_step = idx;
		if (idx > size / 2)
			b_step = size - idx;
		if (step > stack->steps + b_step)
		{
			p_idx = idx;
			step = stack->steps + b_step;
			*tmp = stack;
		}
		idx++;
		stack = stack->next;
	}
	return (p_idx);
}

void	transfer_a(t_stack **a, t_stack **b, size_t size)
{
	int	rot;
	int	p_idx;
	size_t	b_size;
	t_stack	*tmp;
	
	tmp = 0;
	//ft_putstr_fd("transfer a...\n", 1);
	b_size = stack_len(*b);
	//ft_putstr_fd("steps setted\n", 1);
	while (b_size)
	{
		set_steps(*a, *b, size);
		p_idx = min_step(*b, &tmp, b_size);
	//	ft_putstr_fd("min step detected: ", 1);
	//	ft_putnbr_fd(tmp->steps, 1);
	//	ft_putstr_fd(" for: ", 1);
	//	ft_putnbr_fd(tmp->index, 1);
	//	ft_putstr_fd("\n", 1);
	//	printf("if %i > %u:\n\trra\n", get_ground(*a, p_idx, size), size/2);
		if (get_ground(*a, get_atindex(*b, p_idx)->index, size) > size / 2)
			while (tmp->steps--)
				rra(a);
		else
			while (tmp->steps--)
				ra(a);
		if (p_idx > b_size / 2)
			while (b_size - p_idx++)
				rrb(b);
		else
			while (p_idx--)
				rb(b);
		pa(b, a);
		b_size -= !!++size;
	}
}
