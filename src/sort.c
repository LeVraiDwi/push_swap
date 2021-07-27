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
