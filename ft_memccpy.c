/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:01:13 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/31 12:28:16 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *	ft_memccpy(void *dst, const void *src, int c,size_t n)
{
	unsigned char *a = (unsigned char *)dst;
	const char *b = (const char *)src;
	unsigned char d = (unsigned char)c;
	size_t i;

	i = 0;
	while(i < n)
	{
		a[i] = b[i];
		if(a[i] == d)
		{
			a[i] = d;
			return (dst + i + 1);
		}
		i++;
	}
	return NULL;
}
