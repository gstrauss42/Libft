/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:30:49 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 13:39:46 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_sb(t_list **head)
{
	int		i;
	t_list	*tmp;

	if (*head && (*head)->next)
	{
		i = (*head)->next->fpos;
		tmp = ft_pop(head, 2);
		ft_lstadd(head, tmp);
		(*head)->fpos = i;
	}
}
