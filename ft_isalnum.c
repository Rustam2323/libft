#include "libft.h"

int	ft_isalnum(int i)
{
	if(ft_isdigit(i) == 1 || ft_isalpha(i) == 1)
		return (1);
	else
		return (0);
}