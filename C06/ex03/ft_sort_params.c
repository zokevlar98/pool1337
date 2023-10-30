/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:31:36 by zqouri            #+#    #+#             */
/*   Updated: 2023/08/29 20:05:02 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_arg(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (argc > j)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, &"\n", 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		j;
	int		i;
	char	*tmp;

	j = 1;
	while (argc > j)
	{
		i = j + 1;
		while (argc > i)
		{
			if ((ft_strcmp(argv[j], argv[i])) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[i];
				argv[i] = tmp;
			}
			i++;
		}
		j++;
	}
	ft_print_arg(argc, argv);
	return (0);
}
