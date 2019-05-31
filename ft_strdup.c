/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:06:37 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/31 11:33:00 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
	char *a;
	char *str1;
	str1 = (char *) str;
	int i;
	i = 0;
	a = (char *)malloc(ft_strlen(str1) + 1 * sizeof (char));
	if(a == NULL)
		return(NULL);
	i = 0;
	while(str[i] != '\0')
	{
		a[i] = str1[i];
		i++;
	}
	a[i] = '\0';
	return(a);
}
