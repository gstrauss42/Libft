/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:56:22 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/30 09:17:42 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int check(char *tmp, char *str)
{
	int p = 0;
	if(str[0] == '-')
	{
		char ttmp[11] = "-2147483648";
		while(str[p])
		{
			if(!ttmp[p] || str[p] > ttmp[p])
				return(0);
			else if(ttmp[p] == str[p])
				p++;
			else if(ttmp[p] < str[p])
				break;
		}
	}
	else
	{
		while(str[p])
		{
			if(!tmp[p] || str[p] > tmp[p])
				return(0);
			else if(tmp[p] == str[p])
				p++;
			else if(tmp[p] < str[p])
				break;
		}
	}
	return(1);
}

int		ft_isint(char *str)
{
	int i;
	i = 0;
	char tmp[11] = "2147483647";
	if(str[i] == '-')
	{
		if(ft_strlen(str) == 11)
		{
			if(check(tmp, str) == 0)
				return(0);
		}
		if(ft_strlen(str) > 11)
			return(0);
		i++;
	}
	if(ft_strlen(str) > 10 && str[0] != '-')
		return(0);
	if(ft_strlen(str) > 11 && str[0] == '-')
		return(0);
	while(str[i])
	{
		if(ft_isdigit(str[i]) == 1)
			i++;
		else
			return(0);
	}
	if(ft_strlen(str) >= 10)
	{
		if(check(tmp, str) == 0)
			return(0);
	}
	return(1);
}
