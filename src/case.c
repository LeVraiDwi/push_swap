#include "push_swap.h"

int	is_sort(t_pile *pile)
{
	int	i;

	i = 0;
	while (i < pile->l - 1 && pile->a[i] + 1 == pile->a[i + 1])
		i++;
	if (i == pile->l - 1)
		return (1);
	return (0);
}

void	ft_case_sort(t_pile *pile, int flag)
{
	if (flag == CASE_ONE)
		sa(pile);
	else if (flag == CASE_TWO)
	{
		sa(pile);
		rra(pile);
	}
	else if (flag == CASE_THREE)
		ra(pile);
	else if (flag == CASE_FOUR)
	{
		sa(pile);
		ra(pile);
	}
	else if (flag == CASE_FIVE)
		rra(pile);
}

int	ft_case(t_pile *pile)
{
	int	*a;

	a = pile->a;
	if (a[1] < a[0] && a[0] < a[2])
		return (CASE_ONE);
	else if (a[2] < a[1] && a[1] < a[0])
		return (CASE_TWO);
	else if (a[1] < a[2] && a[2] < a[0])
		return (CASE_THREE);
	else if (a[0] < a[2] && a[2] < a[1])
		return (CASE_FOUR);
	else if (a[2] < a[0] && a[0] < a[1])
		return (CASE_FIVE);
	return (0);
}

void	ft_case_two(t_pile *pile)
{
	if (pile->a[0] > pile->a[1])
		sa(pile);
}

void	ft_sort_four(t_pile *pile)
{
	if (pile->b[0] == 0)
		pa(pile);
	else if (pile->b[0] == 1)
		ft_four_one(pile);
	else if (pile->b[0] == 2)
		ft_four_two(pile);
	else if (pile->b[0] == 3)
		ft_four_three(pile);
	else if (pile->b[0] == 4)
		ft_four_four(pile);
}
