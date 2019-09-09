/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 08:47:13 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/09 08:47:26 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	zero(t_list **lista)
{
	while (true)
	{
		(*lista)->fpos = 0;
		if ((*lista)->next)
			*lista = (*lista)->next;
		else
			break ;
	}
}

t_list	*cycle(t_list **lista, t_list *tmp, int i)
{
	while (true)
	{
		if (i >= ft_atoi((*lista)->content) && (*lista)->fpos == 0)
		{
			i = ft_atoi((*lista)->content);
			tmp = *lista;
		}
		if ((*lista)->next)
			*lista = (*lista)->next;
		else
			break ;
	}
	return (tmp);
}

void	turn(t_list **lista)
{
	while ((*lista)->fpos != 0)
	{
		if ((*lista)->next)
			*lista = (*lista)->next;
		else
			break ;
	}
}

void	order(t_list **lista)
{
	t_list	*tmp;
	t_list	*ttmp;
	int		p;
	int		i;

	i = ft_atoi((*lista)->content);
	p = 1;
	ttmp = *lista;
	zero(lista);
	*lista = ttmp;
	while (p < ft_lstlen(ttmp) + 2)
	{
		tmp = cycle(lista, tmp, i);
		*lista = ttmp;
		tmp->fpos = p;
		turn(lista);
		if (!(*lista)->next && (*lista)->fpos != 0)
			break ;
		i = ft_atoi((*lista)->content);
		p++;
		*lista = ttmp;
	}
	*lista = ttmp;
}
