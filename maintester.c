#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char f[8] = "88888888";
	char s[4] = "4444";
	//char buf[40];
	//ft_memcpy(f, s, 2);
	//ft_memmove(s, f, 2);
	memmove(s, f, 1);
	printf(s);
	return (0);
}


