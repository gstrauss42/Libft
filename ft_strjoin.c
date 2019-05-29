/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:43:17 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 12:43:20 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int o;
	int len;
	char *ret;
	o = 0;
	i = 0;
	while(s1[i] != '\0')
		i++;
	while(s1[o] != '\0')
		o++;
	len = i + o - 1;
	ret = (char *) malloc (len *sizeof(char));
	while(s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	while(s2[o] != '\0')
	{
		ret[i] = s1[o];
		i++;
		o++;
	}
	ret[i] = '\0';
	return(ret);
}
