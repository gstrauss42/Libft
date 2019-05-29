/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:43:37 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 14:49:09 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	int i;
	i = 0;
	char *ss;
	ss = (char *) malloc( i * sizeof(char));
	ss = (char *) s;
	while(ss[i] != '\0')
	{
		ss[i] = f(ss[i]);
		i++;
	}
	return(ss);
}
