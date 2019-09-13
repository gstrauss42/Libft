/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:21:11 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/13 11:47:55 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_rrb(t_list **listb)
{
	t_list	*tmp;
	t_list	*bfor;

	bfor = *listb;
	if (*listb && (*listb)->next)
	{
		while (bfor->next->next)
			bfor = bfor->next;
		tmp = bfor->next;
		bfor->next = NULL;
		tmp->next = NULL;
		ft_lstadd(listb, tmp);
	}
}
