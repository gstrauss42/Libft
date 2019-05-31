/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrauss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:05:50 by gstrauss          #+#    #+#             */
/*   Updated: 2019/05/31 11:39:35 by gstrauss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(const char *s1, const char *s2)
{
	int i;
	i = 0;
	unsigned char *ss1;
	unsigned char *ss2;
	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	while((ss1[i] || ss2[i]) != '\0')
	{
		if(ss1[i] != ss2[i])
		{
			i = ss1[i] - ss2[i];
			return(i);
		}
		i++;
	}
	return(0);
}
