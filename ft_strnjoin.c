/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:43:17 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/12 13:40:55 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, char c)
{
	int		i;
	int		o;
	char	*ret;

	i = 0;
	o = 0;
	if(s2)
		o = ft_strlen(s2);
	if(s1)
		i = ft_strlen(s1);
	ret = (char *)malloc(o + i + 1);
	i = 0;
	o = 0;
	while (s1 && s1[i] != '\0' && s1[i] != c)
	{
		ret[i] = s1[i];
		i++;
	}
	while (s2 && s2[o] != '\0' && s2[o] != c)
	{
		ret[i] = s2[o];
		i++;
		o++;
	}
	ret[i] = '\0';
	return (ret);
}
