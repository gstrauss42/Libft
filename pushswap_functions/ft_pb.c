/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:26:25 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/06 09:06:05 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_pb(t_list **lista, t_list **listb)
{
	int i;
	i = (*lista)->fpos;
	if((*lista) != NULL)
	{
		if(*listb == NULL)
		{
			t_list *tmp = ft_pop(lista, 0);
			ft_lstezmake(listb, tmp->content);
			(*listb)->fpos = i;
		}
		else	
		{
			t_list *tmp = ft_pop(lista, 0);
			ft_lstadd(listb, tmp);
			(*listb)->fpos = i;
		}
	}
}
