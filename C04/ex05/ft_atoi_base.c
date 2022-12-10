/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:42:54 by agaygisi          #+#    #+#             */
/*   Updated: 2022/09/13 10:59:51 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

int	is_valid(char *str)
{
	int		i;
	int		j;

	i = 0;
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

int	char_loc(char *str, char c)
{
	int		k;

	k = 0;
	while (str[k])
	{
		if (str[k] == c)
			return (k);
		k++;
	}
	k = 0;
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	z;
	int				s;
	int				nbr;
	int				loc;

	z = 0;
	s = 1;
	nbr = 0;
	while ((str[z] >= '\t' && str[z] <= '\r') || str[z] == ' ')
		z++;
	while (str[z] == '-' || str[z] == '+')
	{
		if (str[z] == '-')
			s = s * -1;
		z++;
	}
	loc = char_loc(base, str[z]);
	while (loc >= 0)
	{
		nbr = nbr * ft_strlen(base) + loc;
		z++;
		loc = char_loc(base, str[z]);
	}
	z = 0;
	return (nbr * s);
}
