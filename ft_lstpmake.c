/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmake.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:26:18 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/24 09:34:59 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_splitter(char **input, char c, int num)
{
	char **tmp;

	tmp = ft_strsplit(input[num], c);
	return (tmp);
}

t_list		*ft_lstmake(char **input, char c, int num)
{
	int		i;
	char	**split;
	t_list	*head;

	split = ft_splitter(input, c, num);
	i = 0;
	head = NULL;
	while (split[i] != NULL)
	{
		ft_lstezmake(&head, split[i]);
		i++;
	}
	return (head);
}
