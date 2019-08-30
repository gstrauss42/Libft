/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:35:09 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 10:16:02 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ret1(t_list *ret, t_list *tmp, t_list **head);

t_list	*ft_pop(t_list **head, int num)
{
	int		i;
	t_list	*ret;
	t_list	*tmp;
	t_list	*bfor;

	tmp = *head;
	ret = NULL;
	i = 1;
	if (num == 1)
		return (ret1(ret, tmp, head));
	while (true)
	{
		bfor = tmp;
		if (tmp->next)
		{
			i++;
			tmp = tmp->next;
		}
		else
			break ;
		if (i == num)
			break ;
	}
	if (i != num)
		return (NULL);
	i = tmp->fpos;
	ret = ft_lstnew((char*)tmp->content, tmp->content_size);
	if (tmp->next)
		bfor->next = tmp->next;
	else
		bfor->next = NULL;
	ret->fpos = i;
	return (ret);
}

t_list	*ret1(t_list *ret, t_list *tmp, t_list **head)
{
	ret = ft_lstnew((char *)tmp->content, tmp->content_size);
	ret->fpos = (*head)->fpos;
	if (tmp->next)
	{
		*head = tmp->next;
		ft_lstdelone(&tmp, ft_del);
	}
	else
	{
		ret = ft_lstnew((char *)tmp->content, tmp->content_size);
		ft_lstdel(head, ft_del);
	}
	return (ret);
}
