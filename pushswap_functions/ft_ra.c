/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:58:03 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 11:28:53 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_ra(t_list **lista)
{
	if((*lista)->next)
	{
		int i;
		t_list *tmp;
		i = (*lista)->fpos;
		tmp = ft_pop(lista, 1);
		ft_lstend(*lista, tmp);
		tmp = *lista;
		while(true)
		{
			if(tmp->next)
				tmp = tmp->next;
			else
				break;
		}
		tmp->fpos = i;	
	}
}
