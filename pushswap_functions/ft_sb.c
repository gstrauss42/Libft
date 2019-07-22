/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:30:49 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/22 14:09:25 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	sb(t_list *head)
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
