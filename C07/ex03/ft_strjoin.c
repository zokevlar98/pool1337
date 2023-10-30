/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:27:00 by zqouri            #+#    #+#             */
/*   Updated: 2023/09/02 16:41:34 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	conteur_final(int size, char **strs, char *sep)
{
	int	i;
	int	len_final;

	i = 0;
	len_final = 0;
	while (i < size)
	{
		len_final = (len_final + ft_strlen(strs[i]));
		i++;
	}
	len_final += ft_strlen(sep) * (size - 1);
	return (len_final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	char		*tab;
	int			j;
	int			k;

	i = -1;
	k = 0;
	tab = malloc((conteur_final(size, strs, sep) + 1) * sizeof(char));
	if (!tab)
		return (0);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j])
				tab[k++] = sep[j++];
	}
	tab[k] = '\0';
	return (tab);
}
