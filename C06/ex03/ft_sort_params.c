/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:56:23 by agaygisi          #+#    #+#             */
/*   Updated: 2022/09/14 14:38:34 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		else if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}
	}
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char *argv[])
{
	int		loop;
	int		x;

	x = 1;
	loop = 1;
	while (loop < argc - 1)
	{
		if (ft_strcmp(argv[loop], argv[loop + 1]) > 0)
		{
			ft_swap(&argv[loop], &argv[loop + 1]);
			loop = 0;
		}
		loop++;
	}
	loop = 1;
	while (loop < argc)
	{
		ft_putstr(argv[loop]);
		write(1, &"\n", 1);
		loop++;
	}
	return (0);
}
