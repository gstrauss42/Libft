/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:26:25 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/13 11:47:29 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_pb(t_list **lista, t_list **listb)
{
	t_list	*tmp;

	if (*lista)
	{
		tmp = *lista;
		*lista = (*lista)->next;
		tmp->next = NULL;
		ft_lstadd(listb, tmp);
	}
}
