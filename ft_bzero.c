#include "libft.h"

void ft_bzero(void *s, size_t c)
{
	ft_memset(s, '\0', c);
}

