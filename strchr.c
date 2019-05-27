/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:05:26 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/27 10:12:46 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(char *s, int c)
{
	int i;
	i = 0;
	char cc, *r;
	cc = (char) c;
	while(s[i] != '\0')
	{
		if(s[i] == cc)
		{	
			r = &s[i];
			return(r);
		}
		i++;
	}
	if(cc == '\0')
	{	
		r = &s[i];
		return(r);
	}
	return(NULL);
}
