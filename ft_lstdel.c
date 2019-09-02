/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:51:28 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/02 10:39:48 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*ft_del)(void *, size_t))
{
	t_list *nnext;
	t_list *qnext;

	if ((alst != NULL) && (ft_del != NULL))
	{
		nnext = *alst;
		qnext = *alst;
		while (nnext != NULL)
		{
			qnext = nnext->next;
			ft_del(nnext->content, nnext->content_size);
			free(nnext);
			nnext = qnext;
		}
		*alst = NULL;
	}
}
