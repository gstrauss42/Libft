/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:46:28 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/31 09:27:27 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strsub(char const *s, unsigned int start, size_t len)
{
	int i;
	char *ret;
	i = 0;
	if(!s)
		return(0);
	ret = (char *) malloc (len + 1 * sizeof(char));
	while(start < len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return(ret);
}
