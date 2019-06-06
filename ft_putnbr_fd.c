/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:40:35 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/06 11:42:09 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test(int n, int fd)
{
	char a;
	if(n == -2147483648)
	{
		a = '-';
		write(fd, &a, 1);
		a = '2';
		write(fd, &a, 1);
		a = '1';
		write(fd, &a, 1);
		a = '4';
		write(fd, &a, 1);
		a = '7';
		write(fd, &a, 1);
		a = '4';
		write(fd, &a, 1);
		a = '8';
		write(fd, &a, 1);
		a = '3';
		write(fd, &a, 1);
		a = '6';
		write(fd, &a, 1);
		a = '4';
		write(fd, &a, 1);
		a = '8';
		write(fd, &a, 1);
		return(1);
	}
	return(0);
}

static int	length(n)
{
	int i;
	int q;

	q = 0;
	i = 1;
	while(n / i > 0)
	{
		i = i * 10; 
		q++;
	}
	return(q);
}

static int	sign(int n, int fd)
{
	char a;
	a = '-';
	if (n < 0)
	{
		write(fd, &a, 1);
		return(1);
	}
	return(0);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		c;
	int		y;
	if(test(n, fd) == 1)
		return;
	if(sign(n, fd) == 1)
		n = n * -1;
	char	p[length(n)];
	int 	s;

	y = length(n);
	c =	10;
	s = y;
	while(n != 0 && y != 0)
	{                                                                          
		i = n % c;
		p[y] = i + 48;
		n = n - i;
		n = n / 10;
		y--;
	}
	y++;
	while(y <= s)
	{
		write(fd, &p[y], 1);
		y++;
	}
}
