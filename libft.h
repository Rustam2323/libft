

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

int	ft_isdigit(int i);
int ft_isalpha(int i);
int ft_isascii(int i);
int ft_isprint(int i);
int ft_isalnum(int i);
int ft_tolower(int i);
int ft_toupper(int i);
void	*ft_memset(void *buf, int ch, size_t count);
void	ft_bzero(void *s, size_t c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *source, size_t count);

size_t	ft_strlen(const char *str);

#endif //LIBFT_H
