/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:52:26 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 13:45:49 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_sa(t_list **head)
{
	int		i;
	t_list	*tmp;

	if (*head && (*head)->next)
	{
		i = (*head)->next->fpos;
		tmp = ft_pop(head, 2);
		ft_lstadd(head, tmp);
		(*head)->fpos = i;
	}
}
