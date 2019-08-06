/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:24:06 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/06 09:35:41 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_rb(t_list **listb)
{
	if(*listb)
	{
		int i;
		i = (*listb)->fpos;
		t_list *tmp;
		tmp = ft_pop(listb, 0);
		ft_lstend(*listb, tmp);
		tmp = *listb;
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
