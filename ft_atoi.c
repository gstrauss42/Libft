/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:59:03 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/04 16:03:03 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{  
    int		res = 0;
    int		sign = 1;
    int		i = 0;

   	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'\
			|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
    while (str[i] != '\0') 
	{	
		if (str[i] > '9' || str[i] < '0')
			return (res *sign);
   		res = res * 10 + str[i] - '0'; 
		i++;
	}
    return (sign * res); 
}
