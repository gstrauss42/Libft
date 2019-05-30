/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:01:13 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 08:18:04 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char *ft_memccpy(void *dst, const void *src, int c,size_t n)
{
	size_t i;
	unsigned char *dest, *source, ab;
	ab = (unsigned char) c;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	while(i < n)
	{	
		if(source[i] == ab)
			return(&source[i+1]);
		dest[i] = source[i];
		i++;
	}
	while(source[i] != '\0')
		i++;
	return(&dest[i]);
}
