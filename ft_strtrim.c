/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:46:48 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 13:06:20 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strtrim(char const *s)
{
	int i;
	int o;
	int end;
	char *ret;
	i = 0;
	o = 0;
	end = 0;
	while(s[end] != '\0')
		end++;
	ret =(char *) malloc (end * sizeof(char));
	while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while(s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	while(i <= end)
	{
		ret[o] = s[i];
		i++;
		o++;
	}
//check if nesacerry	ret[i] = '\0';
	return(ret);
}
