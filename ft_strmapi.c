/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:45:09 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 12:45:14 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	i = 0;
	while(s[i] != '\0')
	{
		s[i] = f(i, s[i]);
		i++;
	}
	s = (char *) malloc (i * sizeof(char));
	return(s);
}
