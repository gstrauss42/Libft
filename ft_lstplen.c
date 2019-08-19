/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:58:59 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/19 10:34:34 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstplen(t_list *head, t_list *node)
{
	int i;
	t_list *temp;

	temp = head;
	i = 0;
	while(temp != node)
	{
		if(temp->next)
			temp = temp->next;
		else
			break;
		i++;
	}
	return(i);
}
