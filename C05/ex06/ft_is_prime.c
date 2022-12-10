/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 22:05:31 by agaygisi          #+#    #+#             */
/*   Updated: 2022/09/15 05:56:49 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	nbr;

	i = 1;
	nbr = nb;
	while (i * i < nbr)
	{
			i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int		i;
	int		sqrt;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	sqrt = ft_sqrt(nb);
	while (i <= sqrt)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
