/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:46:57 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/03 09:46:33 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_itoa(int n)
{
	char * ret;
	int i;
	int a;
	int q;
	int o;
	o = 0;
	a = 0;
	q = 0;
	i = 1;
	while(n / i != 0)
	{
		q++;
		i = i * 10;
	}
	ret = (char *)malloc((q + 2) * sizeof(char));
	if(ret == NULL)
		return(NULL);
	if( n == 0)
	{
		ret[0] = 48;
		ret[1] = '\0';
		return(ret);
	}
	i = i / 10;
	while( q + 1  > 0)
	{
		a = n / i;
		ret[o] = a + 48;
		a = a * i;
		i = i / 10;
		n = n - a;
		q--;
		o++;
	}
	return(ret);
}
