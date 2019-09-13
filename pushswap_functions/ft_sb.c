/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:30:49 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/13 12:21:41 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_sb(t_list **listb)
{
	t_list	*tmp;

	if (*listb && (*listb)->next)
	{
		tmp = *listb;
		*listb = tmp->next;
		tmp->next = (*listb)->next;
		(*listb)->next = tmp;
	}
}
