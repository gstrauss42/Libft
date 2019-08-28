/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:26:25 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 11:27:46 by gstrauss         ###   ########.fr       */
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
			t_list *tmp = ft_pop(lista, 1);
			*listb = ft_lstnew((char *)tmp->content, tmp->content_size);
			(*listb)->fpos = i;
		}
		else	
		{
			t_list *tmp = ft_pop(lista, 1);
			ft_lstadd(listb, tmp);
			(*listb)->fpos = i;
		}
	}
}
