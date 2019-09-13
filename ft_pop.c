/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:34:45 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/13 10:44:35 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*first(t_list **head, t_list *ret);
t_list	*end(t_list **head, t_list *ret);

t_list	*ft_pop(t_list **head, int pos)
{
	t_list *tmp;
	t_list *bfor;
	t_list *ret;

	ret = NULL;
	if (ft_lstlen(*head) < pos || pos <= 0)
		return (NULL);
	if (pos == 1)
		return (first(head, ret));
	tmp = *head;
	while (pos != 1)
	{
		bfor = tmp;
		tmp = tmp->next;
		pos--;
	}
	ret = ft_lstnew((char *)tmp->content, tmp->content_size);
	bfor->next = tmp->next;
	ft_lstdelone(&tmp, ft_del);
	return (ret);
}

t_list	*first(t_list **head, t_list *ret)
{
	t_list *tmp;

	tmp = (*head);
	if ((*head)->next)
	{
		ret = ft_lstnew((char *)(*head)->content, (*head)->content_size);
		(*head) = (*head)->next;
		ft_lstdelone(&tmp, ft_del);
	}
	else
	{
		ret = ft_lstnew((char *)(*head)->content, (*head)->content_size);
		ft_lstdel(head, ft_del);
	}
	return (ret);
}

t_list	*end(t_list **head, t_list *ret)
{
	t_list *tmp;
	t_list *bfor;

	tmp = *head;
	while (true)
	{
		if (tmp->next)
			bfor = tmp;
		if (tmp->next)
			tmp = tmp->next;
		else
			break ;
	}
	ret = ft_lstnew((char *)(*head)->content, (*head)->content_size);
	ft_lstdelone(&tmp, ft_del);
	bfor->next = NULL;
	return (ret);
}
