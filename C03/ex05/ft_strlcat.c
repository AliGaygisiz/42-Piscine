/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:04:33 by agaygisi          #+#    #+#             */
/*   Updated: 2022/09/14 17:57:23 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	j = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	j = dest_size;
	if (size == 0 || size <= dest_size)
		return (src_size + size);
	while (src[i] != '\0' && i < size - dest_size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_size + src_size);
}
