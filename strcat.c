/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:05:05 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 12:50:55 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *s1, const char *s2)
{
	int i, a, b;
	char *ret;
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
	while(s2[a] != '\0')
	{
		ret[i] = s2[a];
		i++;
		a++;
	}
	ret[i] = '\0';
	return(ret);
}
