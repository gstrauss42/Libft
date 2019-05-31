/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:14:56 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/31 08:41:03 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strnew(size_t size)
{
	size_t i;
	i = 0;
	char *new;
	new = (char *) malloc(size + 1 * sizeof(char));
	while (size < i)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
