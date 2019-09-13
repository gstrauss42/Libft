/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:24:06 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/13 12:18:31 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_rb(t_list **listb)
{
	t_list	*tmp;

	if (*listb && (*listb)->next)
	{
		tmp = *listb;
		*listb = tmp->next;
		tmp->next = NULL;
		ft_lstend(*listb, tmp);
	}
}
