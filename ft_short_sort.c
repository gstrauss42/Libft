/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 09:05:47 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/30 12:20:54 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	n3(t_list**lista);
void	n2(t_list**lista);

void	ft_short_sort(t_list **lista, t_list **listb, int i)
{
	*listb = NULL;
	if (i == 2)
	{
		ft_sa(lista);
		write(1, "sa\n", 3);
		return ;
	}
	if (i == 3)
	{
		if ((*lista)->fpos == 3)
		{
			n3(lista);
			return ;
		}
		if ((*lista)->fpos == 1)
		{
			ft_rra(lista);
			write(1, "rra\n", 4);
			ft_sa(lista);
			write(1, "sa\n", 3);
			return ;
		}
		else
		{
			n2(lista);
			return ;
		}
	}
	if (i == 5)
	{
	}
}

void	n3(t_list **lista)
{
	ft_ra(lista);
	write(1, "ra\n", 3);
	if ((*lista)->fpos == 1)
		return ;
	else
	{
		ft_sa(lista);
		write(1, "sa\n", 3);
		return ;
	}
}

void	n2(t_list **lista)
{
	if ((*lista)->next->fpos == 1)
	{
		ft_sa(lista);
		write(1, "sa\n", 3);
		return ;
	}
	else
	{
		ft_rra(lista);
		write(1, "rra\n", 4);
		return ;
	}
}
