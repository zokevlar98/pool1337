# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqouri <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 18:25:42 by zqouri            #+#    #+#              #
#    Updated: 2023/09/06 17:37:37 by zqouri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
rm -rf libft.a
find . -name "*.c" -type f -exec gcc -Wall -Wextra -Werror -c {} \;
ar rc libft.a *.o
ranlib libft.a
find . -name "*.o" -type f -exec rm -rf {} \;
