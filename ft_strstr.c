/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:09:57 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/04 15:52:58 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	int		i;
	int		o;
	int		p;

	p = 0;
	i = 0;
	o = 0;
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (haystack[i] != '\0')
	{
		o = 0;
		if (haystack[i] == needle[o])
		{
			while (haystack[i + o] == needle[o] && needle[o])
				o++;
			if (needle[o] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
