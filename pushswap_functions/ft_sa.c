/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:52:26 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 11:29:37 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_sa(t_list **head)
{
	if(*head && (*head)->next)
	{
		int i;
		i = (*head)->next->fpos;
		t_list *tmp = ft_pop(head, 2);
		ft_lstadd(head, tmp);
		(*head)->fpos = i;
	}
}
