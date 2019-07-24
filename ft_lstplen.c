/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:58:59 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/24 11:28:53 by gstrauss         ###   ########.fr       */
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
		temp = temp->next;
		i++;
	}
	return(i);
}
