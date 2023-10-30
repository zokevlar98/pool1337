/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:12:29 by zqouri            #+#    #+#             */
/*   Updated: 2023/08/31 14:00:32 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		*p;
	int		rang;
	long	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	rang = max - min;
	p = ((tab = (int *) malloc(rang * sizeof(int))));
	if (!p)
	{
		return (0);
	}
	while (i < rang)
	{
		tab[i] = min;
		min = min + 1; 
		i++;
	}
	return (tab);
}
