/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:43:17 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/31 09:32:38 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int o;
	char *ss1;
	char *ss2;
	ss1 = (char *) s1;
	ss2 = (char *) s2;
	char *ret;
	o = 0;
	i = 0;
	ret = (char *) malloc ((ft_strlen(ss1) + ft_strlen(ss2) + 1) *sizeof(char));
	while(s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	while(s2[o] != '\0')
	{
		ret[i] = s2[o];
		i++;
		o++;
	}
	ret[i] = '\0';
	return(ret);
}
