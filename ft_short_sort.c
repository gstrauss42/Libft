/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 09:05:47 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/09 14:23:54 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	n3(t_list **lista);
void	n5(t_list **lista, t_list **listb);
void	location_push(t_list ** lista, t_list **listb, int counter);

void	ft_short_sort(t_list **lista, t_list **listb, int i)
{
	if (i == 2)
	{
		ft_sa(lista);
		write(1, "sa\n", 3);
		return ;
	}
	if (i == 3)
	{
		n3(lista);
		return ;
	}
	if (i == 5)
	{
		n5(lista, listb);
		n3(lista);
		if((*listb)->fpos == 4)
			write(1, "sb\n", 3);
		write(1, "pa\npa\nra\nra\n", 12);
		return ;
	}
}

// check this one for leaks
void	n5(t_list **lista, t_list **listb)
{
	t_list	*temp;
	int		counter;
	int		check;

	check	= 0;
	counter = 1;
	while(check != 2)
	{
		temp	= *lista;
		while(temp->next)
		{
			if(temp->fpos == 4 || temp->fpos == 5)
				break;
			temp=temp->next;
			counter++;
		}
		location_push(lista, listb, counter);
		counter = 1;
		check++;
	}
}

void	n3(t_list **lista)
{
	if ((*lista)->fpos > (*lista)->next->fpos)
	{
		ft_sa(lista);
		write(1, "sa\n", 3);
	}
	if ((*lista)->next->next->fpos < (*lista)->next->fpos)
	{
		ft_rra(lista);
		write(1, "rra\n", 4);
	}
	if ((*lista)->fpos > (*lista)->next->fpos)
	{
		ft_sa(lista);
		write(1, "sa\n", 3);
	}
}

void	location_push(t_list ** lista, t_list **listb, int counter)
{
	if(counter > 3)
	{
		while(counter != 6)
		{
			ft_rra(lista);
			write(1, "rra\n", 4);
			counter++;
		}
		ft_pb(lista, listb);
		write(1, "pb\n", 3);
	}
	else
	{
		while(counter != 1)
		{
			ft_ra(lista);
			write(1, "ra\n", 3);
			counter--;
		}
		ft_pb(lista, listb);
		write(1, "pb\n", 3);
	}
}