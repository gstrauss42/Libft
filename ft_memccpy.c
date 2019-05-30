/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:01:13 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 12:54:36 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *	ft_memccpy(void *dst, const void *src, int c,size_t n)
{
	size_t i;
	char *dest, *source, ab;
	ab = (char) c;
	dest = (char *) dst;
	source = (char *) src;
	i = 0;
	if(dest == '\0' && source == '\0')
		return(dest);
	while(i < n)
	{	
		dest[i] = source[i];
		if(dest[i] == ab)
			return(&dest[i+1]);
		i++;
	}
	dest[i] = '\0';
	return(&dest[i]);
}
