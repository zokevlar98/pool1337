/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:44:04 by zqouri            #+#    #+#             */
/*   Updated: 2023/09/06 17:50:17 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_checksep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_countword(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] && ft_checksep(str[i], sep))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && !ft_checksep(str[i], sep))
			i++;
	}
	return (count);
}

int	ft_strlen_word(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && !ft_checksep(str[i], sep))
		i++;
	return (i);
}

char	*ft_strdup(char *str, char *charset)
{
	int		i;
	int		len_word;
	char	*tab;

	i = 0;
	len_word = ft_strlen_word(str, charset);
	tab = ((char *) malloc(sizeof(char) * (len_word + 1)));
	while (i < len_word)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**paragraph;
	int		j;	

	j = 0;
	paragraph = ((char **) malloc(sizeof(char *) 
				* (ft_countword(str, charset) + 1)));
	while (*str != '\0')
	{
		while (*str && ft_checksep(*str, charset))
			str++;
		if (*str)
		{
			paragraph[j] = ft_strdup(str, charset);
			j++;
		}
		while (*str && !ft_checksep(*str, charset))
			str++;
	}
	paragraph[j] = 0;
	return (paragraph);
}
