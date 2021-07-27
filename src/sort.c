#include "push_swap.h"

void	ft_swap(int *tab, int i, int j)
{
	int	temp;

	temp = tab[i];
	tab[i] = tab[j];
	tab[j] = temp;
}

void	ft_sort_tab(int *tab, int first, int last)
{
	int			i;
	int			j;
	int			pivot;

	if (first < last)
	{
		pivot = first;
		i = first;
		j = last;
		while (i < j)
		{
			while (tab[i] <= tab[pivot] && i < last)
				i++;
			while (tab[j] > tab[pivot])
				j--;
			if (i < j)
				ft_swap(tab, i, j);
		}
		ft_swap(tab, pivot, j);
		ft_sort_tab(tab, first, j - 1);
		ft_sort_tab(tab, j + 1, last);
	}
}

void	ft_dub_tab(t_pile *pile)
{
	int	i;

	i = 0;
	while (i < pile->l)
	{
		pile->b[i] = pile->a[i];
		i++;
	}
	pile->lb = pile->l;
}

void	ft_convert_pile(t_pile *pile)
{
	int	i;
	int	j;

	i = 0;
	ft_dub_tab(pile);
	ft_sort_tab(pile->b, 0, pile->l - 1);
	while (i < pile->l)
	{
		j = 0;
		while (j < pile->l)
		{
			if (pile->a[i] == pile->b[j])
			{
				pile->a[i] = j;
				j = pile->l;
			}
			j++;
		}
		i++;
	}
}
