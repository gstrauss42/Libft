/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:45:09 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/31 08:55:40 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *ss;
	ss = (char *) s;
	i = 0;
	ss = (char *) malloc (ft_strlen(ss) + 1 * sizeof(char));
	while(s[i] != '\0')
	{
		ss[i] = f(i, s[i]);
		i++;
	}
	ss[i] = '\0';
	return(ss);
}
