/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:07:26 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/13 12:17:26 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_pa(t_list **lista, t_list **listb)
{
	t_list	*tmp;

	if (*listb)
	{
		tmp = *listb;
		*listb = (*listb)->next;
		tmp->next = NULL;
		ft_lstadd(lista, tmp);
	}
}
