/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:07:26 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 11:27:57 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_pa(t_list **lista, t_list **listb)
{
	if(*listb)
	{
		int i = (*listb)->fpos;
		if(*lista == NULL)
		{
			t_list *tmp = ft_pop(listb, 1);
			ft_lstezmake(lista, tmp->content);
			(*lista)->fpos = i;
		}
		else
		{
			t_list *tmp = ft_pop(listb, 1);
			ft_lstadd(lista, tmp);
			(*lista)->fpos = i;
		}
	}
}
