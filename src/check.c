#include "push_swap.h"

int	ft_is_num(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_create_list(int argc, char **argv, t_pile *pile)
{
	int	i;

	i = 0;
	pile->a = (float *)malloc(sizeof(float) * argc - 1);
	if (!pile->a)
		return (0);
	pile->b = (float *)malloc(sizeof(float) * argc - 1);
	if (!pile->b)
		return (0);
	while (i < argc - 1)
	{
		pile->a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (1);
}

int	ft_is_list(int argc, char **argv, t_pile *pile)
{
	if (!ft_is_num(argc, argv))
		return (0);
	if (!ft_create_list(argc, argv, pile))
		return (0);
	return (1);
}
