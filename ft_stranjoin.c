/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:43:17 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/11 15:17:31 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stranjoin(char *s1, char *s2, char c)
{
	int		i;
	int		q;
	int		o;
	char	*ret;

	q = 0;
	o = ft_strnlen(s2, c);
	i = ft_strnlen(s1, c);
	if (!s1 || !s2)
		return (NULL);
	ret = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	while (s1[i] != '\0')
	{
		while(s1[i] == c)
			i++;
		ret[q++] = s1[i++];
	}
	while (s2[o] != '\0')
	{
		if(s2[o] == c)
			o++;
		ret[q++] = s2[o++];
	}
	ret[q] = '\0';
	return (ret);
}
