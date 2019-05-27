/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:06:37 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/27 10:06:47 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *strdup(const char *str)
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
