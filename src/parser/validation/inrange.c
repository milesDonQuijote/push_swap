#include "push_swap.h"

int	inrange(char *arg)
{
	int	sign;
	int	index;
	char	*range;
	
	index = 0;
	range = "2147483647";
	sign = 1 - (*arg == '-' && arg++) * 2;
	if (ft_strlen(arg) > 10)
		return (0);
	else if (ft_strlen(arg) < 10)
		return (1);
	while (*(arg + 1) && *arg <= range[index++])
		arg++;
	return (!*(arg + 1) && *arg <= range[index] + (sign == -1));
}
