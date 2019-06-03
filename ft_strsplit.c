/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:46:00 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/03 13:46:58 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **		ft_strsplit(char const *s, char c)
{
	int i;
	int o;
	int p;
	char **ret;
	char *ss;
	ss = (char *) s;
	i = 0;
	o = 0;
	p = 0;
	ret = (char **) malloc(ft_strlen(ss) * sizeof(char));
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
	if(!ret)
		return(NULL);
	return(ret);
}
