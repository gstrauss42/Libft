/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:56:22 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/26 13:56:01 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isint(char *str)
{
	int i;
	i = 0;

	if(ft_strlen(str) > 10)
		return(0)
	if(str[i] == '-')
		i++;
	while(str[i])
	{
		if(ft_isdigit(str[i]) == 1)
			i++;
		else
			break;
	}
	if(str[i])
		return(0);
	else if(!str[i])
		return(1);
	return(0);
}
