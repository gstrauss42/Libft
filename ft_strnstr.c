/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:09:01 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/04 15:54:19 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int		o;
	int		p;
	size_t	i;

	i = 0;
	o = 0;
	p = 0;
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i] == needle[o])
		{
			if (o == 0)
				p = i;
			i++;
			o++;
			if (needle[o] == '\0')
				return (&haystack[p]);
		}
		i++;
		o = 0;
	}
	return (NULL);
}
