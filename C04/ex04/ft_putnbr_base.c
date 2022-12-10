/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:44:49 by agaygisi          #+#    #+#             */
/*   Updated: 2022/09/12 21:54:02 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

int	is_valid(int nbr, char *str)
{
	int		i;
	int		j;

	i = 0;
	if (nbr == 0)
	{
		write(1, &str[0], 1);
		return (0);
	}
	if (ft_strlen(str) <= 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j <= ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	len = ft_strlen(base);
	nb = nbr;
	if (is_valid(nbr, base))
	{
		if (nb < 0)
		{
			write(1, &"-", 1);
			nb *= -1;
		}
		if (nb < len)
			write(1, &base[nb], 1);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}
