/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 08:56:15 by gstrauss          #+#    #+#             */
/*   Updated: 2019/09/13 10:45:54 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int shortest_a(t_list *list, t_list *tmp)
{
	if(ft_posdif(list, tmp) < (ft_lstlen(list) / 2 ))
		return(ft_posdif(list, tmp));
	else
		return(ft_lstlen(list) - ft_posdif(list, tmp));
}

static	int shortest_b(t_list *list, t_list *tmp)
{
	if(ft_lstplen(list, tmp) < (ft_lstlen(list) / 2 ))
		return(ft_lstplen(list, tmp));
	else
		return(ft_lstlen(list) - ft_lstplen(list, tmp));
}

int		important(t_list **lista, t_list **listb, t_list *tmp, int y)
{ //temp is the variable to check, y is the number of moves to get it into position
	int short_a;
	int short_b;

	short_a = shortest_a(*lista, tmp);
	short_b = shortest_b(*listb, tmp);
	//       if 
	if( (    (      ft_lstplen(*listb, tmp) > ft_lstlen(*listb) / 2    &&  ft_posdif(*lista, tmp) > ft_lstlen(*lista) / 2 )   \
	   ||	(      ft_lstplen(*listb, tmp) <= ft_lstlen(*listb) / 2   &&  ft_posdif(*lista, tmp) <= ft_lstlen(*lista) / 2 )  )\
	   ||   (short_a > ft_lstlen(*listb) || short_b > ft_lstlen(*lista)))
	{
		if(short_a > short_b)
			return( y = short_a);
		else
			return(y = short_b);
	}
	else
		return(y = short_a + short_b);
	

	// if (ft_lstplen(*listb, tmp) > (ft_lstlen(*listb)
	// 			/ 2 && ft_lstlen(*listb) > 2)) //if tmp is in the second half of listb
	// {
	// 	y = ft_lstlen(*listb) - ft_lstplen(*listb, tmp) + 1; //y = distance from the bottom of the stack
	// 	if (ft_posdif(*lista, tmp) != 0)
	// 		y = y + ft_posdif(*lista, tmp);
	// }
	// else if (ft_lstplen(*listb, tmp) <= (ft_lstlen(*listb) / 2)) // if tmp is in the first half of listb
	// {
	// 	y = ft_lstplen(*listb, tmp) + 1; //distance from the top of the stack
	// 	if (ft_posdif(*lista, tmp) != 0) // posdif returns the position of the node that tmp must be on top of
	// 		y = y + ft_posdif(*lista, tmp);  // adds nodes distance from the top of its stack and the distance of its home in lista from the top
	// }
	// return (y);
}

void	algo(t_list **lista, t_list **listb)
{
	t_list	*ret;
	t_list	*tmp;
	int		check;
	int		y;

	tmp = *listb;
	while ((tmp && *listb) || (y = 0))
	{
		check = 10000000;
		tmp = *listb;
		while (tmp)
		{
			if (tmp)
				y = important(lista, listb, tmp, y);
			if (y < check && (check = y))
				ret = tmp;
			if (tmp->next)
				tmp = tmp->next;
			else
				break ;
		}
		if (*listb && ret->content)
			perform(lista, listb, ret);
		ret = *listb;
	}
}
