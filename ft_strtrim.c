/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:46:48 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/03 12:51:42 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strtrim(char const *s)
{
	int i;
	int o;
	int end;
	char *ret;
	char *ss;
	ss = (char *)s;
	i = 0;
	o = 0;
	end = ft_strlen(ss);
	ret =(char *) malloc ((end + 1) * sizeof(char));
	if(ret == NULL)
		return(NULL);
	while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	end--;
	while(s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	while(i <= end)
	{
		ret[o] = s[i];
		i++;
		o++;
	}
	ret[o] = '\0';
	return(ret);
}
