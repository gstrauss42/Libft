/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:46:00 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 13:07:13 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **		ft_strsplit(char const *s, char c)
{
	int i;
	int o;
	int p;
	char **ret;
	i = 0;
	o = 0;
	p = 0;
	while(s[i] != '\0')
		i++;
	ret = (char **) malloc(i + 1 * sizeof(char));
	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
			while (s[i] == c)
			i++;
		}
		while(s[i] != c)
		{
			ret[o][p] = s[i];
			p++;
			i++;
		}
		o++;
	}
	return(ret);
}
