/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:26:25 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/27 09:52:27 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_pb(t_list **lista, t_list **listb)
{
	int i;
	if(*lista)
	{
		i = (*lista)->fpos;
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
