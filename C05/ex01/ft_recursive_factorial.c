/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 22:00:55 by agaygisi          #+#    #+#             */
/*   Updated: 2022/09/15 00:58:12 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		s;

	s = 1;
	if (nb == 0)
	{
		return (s);
	}
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		nb = (nb * ft_recursive_factorial(nb - 1));
	}
	return (nb);
}
