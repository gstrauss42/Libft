/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:35:09 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/17 15:05:12 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_pop(t_list **head, int num)
{
	int i;

	i = 0;
	t_list	*tmp;
	t_list	*ret;
	t_list	*before_pop;
	t_list	*after_pop;
	tmp = *head;
	while(i < num - 1 && tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	if(i + 1 < num)
		return(NULL);
	if(num == 0)
	{
		ret = *head;
		if((*head)->next)
			*head = (*head)->next;
		ret->next = NULL;
		return(ret);
	}
	before_pop = tmp;
	if(!tmp->next)
		return(NULL);
	tmp = tmp->next;
	after_pop = tmp->next;
	ret = tmp;
	ret->next = NULL;
	before_pop->next = after_pop;
	return(ret);
}
