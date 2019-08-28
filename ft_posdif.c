/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_posdif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:24:10 by gstrauss          #+#    #+#             */
/*   Updated: 2019/08/28 13:30:56 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_posdif(t_list *head, t_list *check)
{
	int		i;
	t_list	*tmp;
	t_list	*ttmp;
	t_list	*hold;
	int		val;

	ttmp = head;
	hold = head;
	val = 1000000;
	i = 0;
	if (head->fpos && check)
	{
		while (true)
		{
			if (head->fpos > check->fpos && head->fpos < val)
			{
				tmp = head;
				val = head->fpos;
			}
			if (head->fpos > hold->fpos)
				hold = head;
			if (head->next)
				head = head->next;
			else
				break ;
		}
		head = ttmp;
		if (val == 1000000)
		{
			while (head != hold)
			{
				head = head->next;
				i++;
			}
		}
		else
		{
			while (head != tmp)
			{
				head = head->next;
				i++;
			}
		}
	}
	return (i);
}
