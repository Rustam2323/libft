#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t c)
{
	if(dest == src || !c)
		return(dest);
	if(dest > src)
	{
		while(c)
		{
			c--;
			((char *)dest)[c] = ((char *)src)[c];
		}
	}
	else if(dest < src)
	{
		ft_memcpy(dest, src, c);
	}
	return(dest);
}