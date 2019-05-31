/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:07:06 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/31 10:19:27 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t o;
	char * s;
	s = (char *)src;
	i = ft_strlen(dst);
	o = 0;
	while(src[o] != '\0' && o < dstsize)
	{
		dst[i] = src[o];
		o++;
		i++;
	}
	dst[i] = '\0';
	return(i);
}
