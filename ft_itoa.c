/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:46:57 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/31 13:32:36 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *	ft_itoa(int n)
{
	char * ret;
	ret = 0;
	int i;
	int z;
	int c;
	c = 0;
	z = 0;
	i = 1;
	while(n / i != 0)
	{
		i = i * 10;
		c++;
	}
	i = i / 10;
	while(c > 0)
	{
		ret[z] = n / i;
		n = n - ((n / i) * i);
	}
	return(ret);
}
