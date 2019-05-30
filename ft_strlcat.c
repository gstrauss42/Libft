/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:07:06 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 08:26:34 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	size_t o;
	i = 0;
	o = 0;
	while(dst[i] != '\0')
		i++;
	while(src[o] != '\0' && o < dstsize)
	{
		dst[i] = src[o];
		o++;
		i++;
	}
	dst[i] = '\0';
	return(i);
}
