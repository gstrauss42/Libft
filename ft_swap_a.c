/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:52:26 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/15 12:42:09 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	sa(t_list *head)
{
	t_list	*node;
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *)malloc(ft_strlen(head->content) + 1);
	if (head->next)
	{
		ft_strcpy(tmp, head->content);
		node = head->next;
		ft_strcpy(head->content, node->content);
		ft_strcpy(node->content, tmp);
	}
	free(tmp);
}
