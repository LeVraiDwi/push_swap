#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "libft.h"
# define LOW_INT -2147483648
# define HIGHT_INT 2147483647

typedef struct	s_pile
{
	float	*a;
	float	*b;
}				t_pile;

//check.c
int	ft_is_num(int argc, char **argv);
int	ft_create_list(int argc, char **argv, t_pile *pile);
int	ft_is_list(int argc, char **argv, t_pile *pile);
#endif
