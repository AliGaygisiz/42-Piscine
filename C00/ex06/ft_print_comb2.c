/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <agaygisi@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:51:09 by agaygisi          #+#    #+#             */
/*   Updated: 2022/08/29 04:54:32 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_writeout(int a)
{
	int		y;
	int		z;

	if (a <= 9)
	{
		ft_putchar('0');
		ft_putchar(a + 48);
	}
	else
	{
		y = a / 10;
		z = a % 10;
		ft_putchar(y + 48);
		ft_putchar(z + 48);
	}
}

void	ft_print_comb2(void)
{
	int		k;
	int		l;

	k = 0;
	while (k < 98)
	{
		l = k + 1;
		while (l <= 99)
		{
			ft_writeout(k);
			ft_putchar(' ');
			ft_writeout(l);
			ft_putchar(',');
			ft_putchar(' ');
			l++;
		}
	k++;
	}
	ft_writeout(98);
	ft_putchar(' ');
	ft_writeout(99);
}
