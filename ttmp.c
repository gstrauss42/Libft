/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:46:57 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/06 11:53:56 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int i;
	int q;

	q = 0;
	i = 0;
	while(n / i > 0)
	{
		i = i * 10;
		q++;
	}
	return(q);
}

char		*ft_itoa(int n)
{
	int i;
	int c;
	int y;
	char *p;
	int s;

	y = length(n);
	c = 10;
	s = y;
	p = (char *)malloc(y * sizeof(char *));
	while(n != 0 && y != 0)
	{
		i = n % c;
		p[y] = i + 48;
		n = n -1;
		n = n / 10;
		y--;
	}
	p[y] = '\0';
	return(p);
}
