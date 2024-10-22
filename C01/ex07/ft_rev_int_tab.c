/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:41:13 by zqouri            #+#    #+#             */
/*   Updated: 2023/08/19 14:16:11 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	p;

	i = 0;
	while (i < (size / 2))
	{
		p = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = p;
		i++;
	}
}
