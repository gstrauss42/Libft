/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:06:37 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 12:52:05 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
	char *a;
	int i;
	i = 0;
	while(str[i] != '\0')
		i++;
	a = (char *)malloc(i * sizeof (char));
	i = 0;
	while(str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}
	return(a);
}
