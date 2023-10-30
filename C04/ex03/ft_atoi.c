/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 23:43:56 by zqouri            #+#    #+#             */
/*   Updated: 2023/08/28 14:24:23 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_space(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	return (i);
}

int	ft_changesigne(char *str)
{
	int	i;
	int	signe;

	signe = 1;
	i = ft_space(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			signe = -signe;
		}
		i++;
	}
	return (signe);
}

int	ft_compteurfinal(char *str)
{
	int	i;

	i = ft_space(str);
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	x;

	i = ft_compteurfinal(str);
	signe = ft_changesigne(str);
	x = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = x * 10 + (str[i] - '0');
		i++;
	}
	return (x * signe);
}
