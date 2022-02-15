#include "push_swap.h"

int      get_min(t_stack *stack, size_t size)
{
        int     min;
        int     idx;
	int	m_idx;

        idx = 1;
	m_idx = 0;
        min = stack->index;
        stack = stack->next;
        while (idx++ < size)
        {
                if (stack->index < min)
		{
			m_idx = idx - 1;
                        min = stack->index;
		}
                stack = stack->next;
        }
        return (m_idx);
}
