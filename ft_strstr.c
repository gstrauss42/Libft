/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:09:57 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 13:54:47 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(char *haystack, char *needle)
{
	int i, o, p;
	p = 0;
	i = 0;
	o = 0;
	if(ft_strlen(needle) == 0)
		return(haystack);
	while(haystack[i] != '\0')
	{
		while (haystack[i] == needle[o])
		{
			if(o == 0)
				p = i;
			i++;
			o++;
			if (needle[o] == '\0')
				return(&haystack[p]);
		}
		i++;
		o = 0;
	}
	return(NULL);
}
