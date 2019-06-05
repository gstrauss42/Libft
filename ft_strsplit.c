/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:46:00 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/05 09:01:23 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char		*substring(char *a, char c, int i)
{
	char *ret;
	int p;
	int b;
	b = i;
	p = 0;
	while(a[i] != c)
		i++;
	ret = (char *)malloc(i - b + 1 * sizeof(char));
	while(b < i && a[b] != '\0')
	{
		ret[p] = a[b];
		b++;
		p++;
	}
	ret[p] = '\0';
	return(ret);
}

static int	length(char *s, char c)
{
	int i;
	i = 0;
	int ret;
	ret = 0;
	while(s[i] != '\0')
	{
		while(s[i] == c)
		{
			if(s[i + 1] != c)
				ret++;
			i++;
		}
		i++;
	}
	return(ret);
}

char **		ft_strsplit(char const *s, char c)
{
	int i;
	int q;
	char *e;
	int g;
	char *ss;
	char **ret;
	ss = (char *) s;
	e = NULL;
	i = 0;
	q = 0;
	g = length(ss, c);
	ret = (char **)malloc(g * sizeof(char **));
	if(ret ==NULL)
		return(NULL);
	while(ss[i] != '\0')
	{
		while(ss[i] == c)
			i++;
		if(s[i] != c && ss[i] != '\0')
		{
			ret[q] = substring(ss, c, i);
			q++;
			while(s[i] != c && s[i] != '\0')
				i++;
		}
	}
	ret[q] = e;
	return(ret);
}
