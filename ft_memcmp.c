/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:03:31 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 08:20:08 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *ss1, *ss2, a;
	ss1 = (char *) s1;
	ss2 = (char *) s2;
	i = 0;
	while(i <= n)
	{
		if(ss2[i] == ss1[i])
			i++;
		else
		{
			if(ss1[i] > ss2[i])
			{
				a = ss1[i] - ss2[i];
				return(a);
			}
			else if(ss1[i] < ss2[i])
			{
				a = ss1[i] - ss2[i];
				return(a);
			}
		}
	}
	return(0);
}
