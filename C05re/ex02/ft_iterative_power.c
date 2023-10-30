/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:55:32 by zqouri            #+#    #+#             */
/*   Updated: 2023/08/28 19:45:07 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (nb != 0 && power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		x = x * nb;
		power--;
	}
	return (x);
}
