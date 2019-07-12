/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstezmake.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:03:43 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/12 12:44:38 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstezmake(t_list **head, char *input)
{
	if(!*head || !(*head)->content)
		*head = ft_lstnew(input, ft_strlen(input) + 1);
	else
		ft_lstend(*head, ft_lstnew(input, ft_strlen(input) + 1));
	return(*head);
}

int main(int argc, char **argv)
{
	t_list *head;
	int i;

	i = 0;
	while(i<argc)
	{
		head = ft_lstezmake(&head, argv[i]); 
		i++;
	}
	while(head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
	return(0);
}
