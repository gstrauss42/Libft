/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:46:57 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/06 15:42:14 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*test1(char *ret)
{
	ret[0] = 48;
	ret[1] = '\0';
	return (ret);
}

static int	length(int n)
{
	int i;
	int q;

	q = 0;
	i = 1;
	while (n / i != 0)
	{
		q++;
		i = i * 10;
	}
	return (q);
}

char		*ft_itoa(int n)
{
	char *ret;
	int i;
	int p;
	int sign;
	int temp;

	temp = length(n);
	sign = 1;
	p = length(n) - 1;
	i = 10;
	ret = (char *)malloc(length(n)+ 1 *sizeof(char));
	if(n == 0)
		return(test1(ret));
	if(n < 0)
	{
		n = n * - 1;
		ret[0] = '-';
		p++;
	}
	while( n > 0 )
	{
		ret[p] = n % i + 48;
		n = (n - (n % i)) / 10;
		p--;
	}
	ret[temp] = '\0';
	return(ret);
}

int main()
{
	printf("%s", ft_itoa(21474));
	return(0);
}
