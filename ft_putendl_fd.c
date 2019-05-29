/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:17:30 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/29 14:44:47 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char *ss;
	char a;
	a = '\n';
	ss = (char *) s;
	write(fd, &s, ft_strlen(ss));
	write(fd, &a, 1);
	return;
}
