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
	int	*a;
	int	*b;
	int	l;
	int	lb;
}				t_pile;

//check.c
int		ft_is_num(int argc, char **argv);
int		ft_create_list(int argc, char **argv, t_pile *pile);
int		ft_is_list(int argc, char **argv, t_pile *pile);
int		ft_no_double(t_pile *pile);
int		ft_is_double(int i, t_pile *pile);
//sort.c
void	ft_sort_tab(int *tab, int first, int last);
void	ft_swap(int *tab, int i, int j);
//swap.c
int		swap(int *tab, int l);
int		sa(t_pile *pile);
int		sb(t_pile *pile);
#endif
