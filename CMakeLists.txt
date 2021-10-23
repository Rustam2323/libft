cmake_minimum_required(VERSION 3.20)
project(libft C)

set(CMAKE_C_STANDARD 11)

add_executable(libft
        ft_isdigit.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_isalnum.c maintester.c ft_tolower.c ft_toupper.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c)
