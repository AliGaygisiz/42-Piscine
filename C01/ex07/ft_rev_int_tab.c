/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:25:37 by agaygisi          #+#    #+#             */
/*   Updated: 2022/09/03 16:28:18 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		loop;
	int		tmp;

	loop = 0;
	while (loop < size / 2)
	{
		tmp = tab[loop];
		tab[loop] = tab[size - 1 - loop];
		tab[size - loop - 1] = tmp;
		loop++;
	}
}
