/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:10:46 by gstrauss          #+#    #+#             */
/*   Updated: 2019/06/03 12:47:19 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char *ss;
	ss = (char *) s;
	int i;
	i = 0;
	while(ss[i] != '\0')
	{
		ft_putchar_fd(ss[i], fd);
		i++;
	}	
	return;
}
