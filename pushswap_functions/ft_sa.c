/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:52:26 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/20 10:19:08 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_sa(t_list **head)
{
	if(*head && (*head)->next)
	{
		int i;
		i = (*head)->next->fpos;
		t_list *tmp = ft_pop(head, 1);
		ft_lstadd(head, tmp);
		(*head)->fpos = i;
	}
}
