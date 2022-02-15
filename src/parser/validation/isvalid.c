#include "push_swap.h"

int	isvalid(char **argv, int size)
{
	int	index;

	index = 0;
	while (index < size && isnumber(argv[index]) && inrange(argv[index]) && 
			norepeat(argv[index], argv, index))
		index++;
	
	return (size == index);
}
