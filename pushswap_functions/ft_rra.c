/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:19:46 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/13 12:24:14 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_rra(t_list **lista)
{
	t_list	*tmp;
	t_list	*bfor;

	bfor = *lista;
	if (*lista && (*lista)->next)
	{
		while (bfor->next->next)
			bfor = bfor->next;
		tmp = bfor->next;
		bfor->next = NULL;
		tmp->next = NULL;
		ft_lstadd(lista, tmp);
	}
}
