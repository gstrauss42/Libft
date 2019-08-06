/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:26:25 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/05 11:55:14 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_pb(t_list **lista, t_list **listb)
{
	if((*lista) != NULL)
	{
		if(*listb == NULL)
		{
			t_list *tmp = ft_pop(lista, 0);
			ft_lstezmake(listb, tmp->content);
		}
		else	
		{
			t_list *tmp = ft_pop(lista, 0);
			ft_lstadd(listb, tmp);
		}
	}
}
