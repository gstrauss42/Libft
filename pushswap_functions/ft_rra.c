/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:19:46 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/26 10:53:33 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_rra(t_list **lista)
{
	t_list *tmp;
	tmp = ft_pop(lista, ft_lstlen(*lista));
	if(lista)
		ft_lstadd(lista, tmp);
	else
		lista = &tmp;
}
