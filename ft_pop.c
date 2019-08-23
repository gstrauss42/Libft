/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:35:09 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/23 14:44:51 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_pop(t_list **head, int num)
{
	int i;

	if(num != 0)
		num--;
	i = 0;
	t_list	*tmp;
	t_list	*ret;
	t_list	*before_pop;
	t_list	*after_pop;
	tmp = *head;
	if(num < 0)
		return(NULL);
	while(i < num - 1 && tmp->next && tmp)
	{
		if(tmp->next)
			tmp = tmp->next;
		else
			break;
		i++;
	}
	if(i + 1 < num)
		return(NULL);
	if(num == 0)
	{
		ret = ft_lstnew((char *)(*head)->content, (*head)->content_size);
		tmp = *head;
		if((*head)->next)
		{
			*head = (*head)->next;
			ft_lstdelone(&tmp, ft_del);
		}
		else
			ft_lstdel(head, ft_del);
		return(ret);
	}
	before_pop = tmp;
	if(!tmp->next)
		return(NULL);
	tmp = tmp->next;
	ret = ft_lstnew((char *)tmp->content, tmp->content_size);
	after_pop = tmp->next;
	ft_lstdelone(&tmp, ft_del);
	before_pop->next = after_pop;
	return(ret);
}
/*
int	main(int argc, char **argv)
{
	t_list *test;
	t_list *tmp;
	argc = argc + 1;
	test = ft_lstmake(argv, ' ', 1);
	tmp = ft_pop(&test, -20);
	while(test)
	{
		printf("LIST: %s\n", test->content);
		if(test->next)
			test = test->next;
		else
			break;
	}
	sleep(10);
	if(tmp)
		printf("\nPOPPED:%s",(char *) tmp->content);
	return(0);
}*/
