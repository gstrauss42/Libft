/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:46:28 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 16:04:07 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *ret;
	i = 0;
	ret =(char *) malloc (len * sizeof(char));
	while(i < len)
	{
		ret[i] = s[i];
		i++;
	}
	return(ret);
}
