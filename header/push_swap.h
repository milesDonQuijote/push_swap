#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"
#include <stdio.h>

typedef struct s_stack {
	int		index;
	int		steps;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

// STACK
//--	set
t_stack	*new_stack(int *index_array, size_t size);
t_stack *new_element(int index);
t_stack	*get_atindex(t_stack *stack, int index);
void	stack_addback(t_stack **stack, int index);
void	stack_addfront(t_stack **stack, int index);
void	stack_clear(t_stack **stack, size_t size);
int	get_min(t_stack *stack, size_t size);
int	get_max(t_stack *stack, size_t size);
size_t	stack_len(t_stack *stack);

// STACK OPERATIONS
// --	push
void	pa(t_stack **b, t_stack **a);
void	pb(t_stack **a, t_stack **b);

//--	swap
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

//--	rotate
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

//--	reverse rotate
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

// PARSER
t_stack	*parser(char **argv, int size);

//--	validation
int	isvalid(char **argv, int size);
int	isnumber(char *arg);
int	inrange(char *arg);
int	norepeat(char *arg, char **argv, int size);

//--	converting
int	*convert(char **argv, int *size);
t_stack	*indexation(int *array, int size);

// SORTING
//-- 	sort stack
void	sort(t_stack **a, t_stack **b, size_t size);
void	sort_triple(t_stack **stack);
int	issorted(t_stack *stack);

//--	transfer to b
void	transfer_b(t_stack **a, t_stack **b, size_t size);

//--	transfer to a
void	transfer_a(t_stack **a, t_stack **b, size_t size);
void	set_steps(t_stack *a, t_stack *b, size_t size);
int	get_ground(t_stack *stack, int n, size_t size);

#endif
