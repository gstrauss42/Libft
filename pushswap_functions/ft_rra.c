/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:19:46 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/06 09:45:50 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_rra(t_list **lista)
{
	if(*lista)
	{
		int i;
		t_list *tmp;
		tmp = *lista;
		while(true)
		{
			if(tmp->next)
				tmp = tmp->next;
			else
				break;
		}
		i = tmp->fpos;
		tmp = ft_pop(lista, ft_lstlen(*lista));
		ft_lstadd(lista, tmp);
		(*lista)->fpos = i;
	}
}
