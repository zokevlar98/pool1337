/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:26:07 by zqouri            #+#    #+#             */
/*   Updated: 2023/08/31 15:26:01 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long	i;
	int		*tab;
	int		size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = ((int *) malloc(size * sizeof(int)));
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	while (i < size)
	{
		tab[i] = min;
		min = min + 1;
		i++;
	}
	return (size);
}
