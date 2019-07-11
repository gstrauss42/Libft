/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmake.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:26:18 by gstrauss          #+#    #+#             */
/*   Updated: 2019/07/11 09:28:00 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_splitter(char **input, char c)
{
	char **tmp;

	tmp = ft_strsplit(input[1], c);
	return (tmp);
}

t_list		*ft_lstmake(char **input, char c)
{
	int		count;
	int		i;
	char	**split;
	t_list	*head;

	split = ft_splitter(input, c);
	i = 0;
	count = 0;
	while (split[i] != NULL)
	{
		if (i == 0)
			head = ft_lstnew(split[i], ft_strlen(split[i]) + 1);
		else
			ft_lstend(head, ft_lstnew(split[i], ft_strlen(split[i]) + 1));
		i++;
	}
	return (head);
}
