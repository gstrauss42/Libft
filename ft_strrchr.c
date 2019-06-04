/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:09:26 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/04 15:50:49 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	char	cc;
	char	*r;

	i = 0;
	r = 0;
	cc = (char)c;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == cc)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
