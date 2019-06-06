/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:46:57 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/06 14:34:20 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	char	*ret;
	int		i[4];

	i[0] = 0;
	i[1] = 0;
	i[2] = length(n);
	i[3] = 1;
	while (n / (i[3] * 10) != 0)
		i[3] = i[3] * 10;
	if (!(ret = (char *)malloc((length(n) + 1) * sizeof(char))))
		return (NULL);
	if (n == 0)
		return (test1(ret));
	while (i[2] + 1 > 0)
	{
		i[1] = n / i[3];
		ret[i[0]] = i[1] + 48;
		i[1] = i[1] * i[3];
		i[3] = i[3] / 10;
		n = n - i[1];
		i[2]--;
		i[0]++;
	}
	return (ret);
}

char		*ft_itoa(int n)
{
	int sign;
	int i;
	char *ret;

	i = 0;
	sign = 1;
	ret=(char *)malloc(length(n) *sizeof(char *));
	if(n < 0)
		sign = -1;
	if (n > 9)
		ft_itoa(n / 10);
	ret[i] = n % 10;
	i++;
	return(ret);
}
































