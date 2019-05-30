/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:41:41 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/30 13:48:32 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	if(s != NULL)
	{
		int i;
		i = 0;
		while (s[i] != '\0')
		{
			s[i] = '\0';
			i++;
		}
		return;
	}
	return;
}
