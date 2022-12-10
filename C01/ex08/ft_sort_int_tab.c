/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:25:47 by agaygisi          #+#    #+#             */
/*   Updated: 2022/09/03 16:51:32 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		loop;
	int		tmp;

	loop = 0;
	while (loop < size - 1)
	{
		if (tab[loop] > tab[loop + 1])
		{
			tmp = tab[loop];
			tab[loop] = tab[loop + 1];
			tab[loop + 1] = tmp;
			loop = 0;
		}
		else
		{
			loop++;
		}
	}
}
