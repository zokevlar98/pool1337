/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:42:22 by zqouri            #+#    #+#             */
/*   Updated: 2023/08/28 16:55:33 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (fact);
	}
	while (nb > 0)
	{
		fact = fact * nb ;
		nb--;
	}
	return (fact);
}
