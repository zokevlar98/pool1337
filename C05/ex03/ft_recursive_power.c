/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:50:27 by zqouri            #+#    #+#             */
/*   Updated: 2023/08/28 20:52:57 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
	if (nb != 0 && power > 1)
	{
		x = x * nb;
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
