/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstoutput.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:19:40 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/13 10:49:00 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	func(t_list **listb);

void	ft_lstoutput(t_list **lista, t_list **listb)
{
	t_list *tmp;

	tmp = *lista;
	write(1, "Lista:\n", 7);
	while (tmp && tmp->content)
	{
		ft_putnbr(tmp->fpos);
		write(1, "		", 2);
		ft_putendl((char *)tmp->content);
		if (tmp->next)
			tmp = tmp->next;
		else
			break ;
	}
	func(listb);
}

void	func(t_list **listb)
{
	t_list *ttmp;

	ttmp = *listb;
	write(1, "\nListb:\n", 8);
	while (ttmp && ttmp->content)
	{
		ft_putnbr(ttmp->fpos);
		write(1, "		", 2);
		ft_putendl((char *)ttmp->content);
		if (ttmp->next)
			ttmp = ttmp->next;
		else
			break ;
	}
	write(1, "\n", 1);
}
