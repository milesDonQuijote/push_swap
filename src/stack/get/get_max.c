#include "push_swap.h"

int      get_max(t_stack *stack, size_t size)
{
        int     max;
        int     idx;
	int	m_idx;

        max = 0;
        idx = 0;
	m_idx = 0;
        while (idx++ < size)
        {
                if (stack->index > max)
		{
			m_idx = idx - 1;
                        max = stack->index;
		}
                stack = stack->next;
        }
        return (m_idx);
}

