#include "push_swap.h"

int	isnumber(char *arg)
{
	if (*arg == '-' && !ft_isdigit(*++arg))
		return (0);
	while (ft_isdigit(*arg))
		arg++;
	return (!*arg);
}
