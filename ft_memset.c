#include "libft.h"

void *ft_memset(void *buf, int ch, size_t count)
{
	size_t p;

	p = 0;
	while(p < count)
	{
		((char *)buf)[p] = (char)ch;
		p++;
	}
	return(buf);
}

