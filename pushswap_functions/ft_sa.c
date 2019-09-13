/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:52:26 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/13 12:21:36 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_sa(t_list **lista)
{
	t_list	*tmp;

	if (*lista && (*lista)->next)
	{
		tmp = *lista;
		*lista = tmp->next;
		tmp->next = (*lista)->next;
		(*lista)->next = tmp;
	}
}
