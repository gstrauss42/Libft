/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:19:46 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/17 15:32:11 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	rra(t_list **lista)
{
	t_list *tmp;
	tmp = ft_pop(lista, ft_lstlen(*lista));
	ft_lstend(*lista, tmp);
}
