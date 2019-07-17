/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 07:12:06 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/16 07:36:06 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstlen(t_list *head)
{
	int count;

	count = 0;
	while(head && head->next)
	{
		count++;
		head = head->next;
	}
	if(head->content)
		count++;
	return(count);
}
