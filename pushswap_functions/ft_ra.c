/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:58:03 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 09:30:11 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_ra(t_list **lista)
{
	t_list	*tmp;

	if (*lista && (*lista)->next)
	{
		tmp = *lista;
		*lista = tmp->next;
		tmp->next = NULL;
		ft_lstend(*lista, tmp);
	}
}
