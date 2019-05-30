/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:07:43 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 08:27:50 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	int i, b;
	size_t a;
	char *ret;
	b = 0;
	i = 0;
	a = 0;
	while(s1[i] != '\0')
		i++;
	while(s2[b] != '\0')
		b++;
	ret = (char *)malloc((i + b + 1) * sizeof(char));
	i = 0;
	while(s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	while(s2[a] != '\0' && a < n)
	{
		ret[i] = s2[a];
		i++;
		a++;
	}
	ret[i] = '\0';
	return(ret);
}
