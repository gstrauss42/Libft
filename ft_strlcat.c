/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:07:06 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 12:52:25 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i, o;
	i = 0;
	o = 0;
	while(dst[i] != '\0')
		i++;
	while(src[o] != '\0')
		o++;
	i = i + o - 1;
	return(i);
}
