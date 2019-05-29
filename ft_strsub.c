/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:46:28 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 12:46:30 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strsub(char const *s, unsigned int start, size_t len)
{
	int i;
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
