/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:59:03 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 14:35:20 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{  
    int res = 0;
    int sign = 1;
    int i = 0;
    if (str[i] == '-')
   	{ 
        sign = -1; 
        i++;
    }
    while (str[i] != '\0') 
	{
        res = res * 10 + str[i] - '0'; 
		i++;
	}
    return (sign * res); 
} 
