/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:03:31 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/27 10:03:33 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *ss1, *ss2, a;
	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	i = 0;
	while(i <= n)
	{
		if(ss2[i] == ss1[i])
			i++;
		else
		{
			if(ss2[i] > ss1[i])
			{
				a = ss2[i] - ss1[i];
				return(a);
			}
			else
			{
				a = ss1[i] - ss2[i];
				return(a);
			}
		}
	}
	return(0);
}
