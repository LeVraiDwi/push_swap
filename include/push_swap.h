#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"
# define LOW_INT -2147483648
# define HIGHT_INT 2147483647
# define CASE_ONE 1
# define CASE_TWO 2
# define CASE_THREE 4
# define CASE_FOUR 8
# define CASE_FIVE 16

typedef struct s_pile
{
	int	*a;
	int	*b;
	int	l;
	int	lb;
	int	size;
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
void	ft_dub_tab(t_pile *pile, int *from, int *to);
void	ft_convert_pile(t_pile *pile);
//swap.c
int		swap(int *tab, int l);
int		sa(t_pile *pile);
int		sb(t_pile *pile);
//push.c
int		push(int *from, int *to, int lf, int lt);
int		pa(t_pile *pile);
int		pb(t_pile *pile);
//rotate.c
int		rotate(int *tab, int l);
int		ra(t_pile *pile);
int		rb(t_pile *pile);
int		rr(t_pile *pile);
//reverse_rotate.c
int		reverse_rotate(int *tab, int l);
int		rra(t_pile *pile);
int		rrb(t_pile *pile);
int		rrr(t_pile *pile);
//radix.c
int		ft_radix(t_pile *pile);
//main.c
int		ft_sort(t_pile *pile);
void	ft_print_pile(t_pile *pile);
//case.c
int		is_sort(t_pile *pile);
int		ft_case(t_pile *pile);
void	ft_case_sort(t_pile *pile, int flag);
void	ft_case_two(t_pile *pile);
void	ft_sort_four(t_pile *pile);
//small_sort.c
int		ft_small_sort(t_pile *pile);
int		ft_medium_sort(t_pile *pile);
//four.c
void	ft_four_one(t_pile *pile);
void	ft_four_two(t_pile *pile);
void	ft_four_three(t_pile *pile);
void	ft_four_four(t_pile *pile);
//five.c
void	ft_consecutive(t_pile *pile);
void	ft_consecutive_two(t_pile *pile);
void	ft_consecutive_three(t_pile *pile);
void	ft_zero(t_pile *pile);
void	ft_two(t_pile *pile);
void	ft_three(t_pile *pile);
#endif
