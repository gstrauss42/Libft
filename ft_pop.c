/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:35:09 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/27 12:50:02 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_pop(t_list **head, int num)
{
	t_list *ret;
	t_list *tmp;
	t_list *bfor;
	tmp = *head;
	int i;
	i = 1;
	if(num == 1)
	{
		ret = ft_lstnew((char *)tmp->content, tmp->content_size);
		ret->fpos = (*head)->fpos;
		if(tmp->next)
		{
			*head = tmp->next;
			ft_lstdelone(&tmp, ft_del);
		}
		else
		{
			ret = ft_lstnew((char *)tmp->content, tmp->content_size);
			ft_lstdel(head, ft_del);
		}
		return(ret);
	}
	while(true)
	{
		if(tmp->next)
		{
			i++;
			tmp = tmp->next;
		}
		else
			break;
		if(i == num)
			break;
		bfor = tmp;
	}
	if(i != num)
		return(NULL);
	i = tmp->fpos;
	ret = ft_lstnew((char*)tmp->content, tmp->content_size);
	if(tmp->next)
		bfor->next = tmp->next;
	else
		bfor->next = NULL;
	ret->fpos = i;
	return(ret);
}
/*
int	main(int argc, char **argv)
{
	t_list *test;
	t_list *tmp;
	argc = argc + 1;
	test = ft_lstmake(argv);
	tmp = ft_pop(&test, 8);
	while(test)
	{
		printf("LIST: %s\n", test->content);
		if(test->next)
			test = test->next;
		else
			break;
	}
	if(tmp)
		printf("\nPOPPED:%s",(char *) tmp->content);
	return(0);
}*/
