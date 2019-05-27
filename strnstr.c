/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:09:01 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/27 10:09:02 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strnstr(char *haystack, const char *needle, size_t len)
{
	int i, o, p;
	i = 0;
	o = 0;
	p = 0;
	while(haystack[i] != '\0' && i < len)
	{
		while(haystack[i] == needle[o])
		{
			if(o == 0)
				p = i;
			i++;
			o++;
			if(needle[o] == '\0')
				return(&haystack[p]);
		}
		i++;
		o = 0;
	}
	return(NULL);
}
