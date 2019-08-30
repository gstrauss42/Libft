#include "libft.h"

void	algo(t_list **lista, t_list **listb)
{
	t_list	*ret;
	t_list	*tmp;
	int		check;
	int		y;

	y = 0;
	tmp = *listb;
	while (tmp && *lista)
	{
		y = 0;
		check = 10000000;
		tmp = *listb;
		while (tmp)
		{
			if (tmp)
			{
				if (ft_lstplen(*listb, tmp) > (ft_lstlen(*listb)\
							/ 2 && ft_lstlen(*listb) > 2))
				{
					y = ft_lstlen(*listb) - ft_lstplen(*listb, tmp) + 1;
					if (ft_posdif(*lista, tmp) != 0)
						y = y + ft_posdif(*lista, tmp);
				}
				else if (ft_lstplen(*listb, tmp) <= (ft_lstlen(*listb) / 2))
				{
					y = ft_lstplen(*listb, tmp) + 1;
					if (ft_posdif(*lista, tmp) != 0)
						y = y + ft_posdif(*lista, tmp);
				}
			}
			if (y < check)
			{
				check = y;
				ret = tmp;
			}
			if (tmp->next)
				tmp = tmp->next;
			else
				break ;
		}
		if (*lista)
			perform(lista, listb, ret);
		ret = *listb;
	}
}
