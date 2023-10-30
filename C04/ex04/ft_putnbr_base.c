/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 02:10:17 by zqouri            #+#    #+#             */
/*   Updated: 2023/08/28 15:34:40 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	j = 0;
	if (base[j] == '\0' || base[1] == '\0')
		return (0);
	while (base[j] != '\0')
	{
		if (base[j] == '+' || base[j] == '-')
			return (0);
		i = j + 1;
		while (base[i] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			i++;
		}
		j++;
	}
	return (j);
}

void	ft_recursive_base(unsigned int nbr, int taill, char *base)
{
	taill = ft_check_base(base);
	if (nbr == 0)
		return ;
	ft_recursive_base(nbr / taill, taill, base);
	ft_putchar(base[nbr % taill]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				taill;
	unsigned int	number ;

	if (nbr < 0)
	{
		write(1, "-", 1);
		number = nbr * -1;
	}
	else
		number = nbr;
	taill = ft_check_base(base);
	if (taill == 0)
		return ;
	else if (taill > 0)
	{
		if (number == 0)
			write(1, &base[0], 1);
		else
			ft_recursive_base(number, taill, base);
	}
}
