#include "libft.h"

void	ft_reorder(t_list **lista)
{
	t_list *tmp = (*lista);
	t_list *ttmp;
	int check = 1000000;
	while(true)
	{
		if(tmp->fpos < check)
		{
			ttmp = tmp;
			check = tmp->fpos;
		}
		if(tmp->next)
			tmp = tmp->next;
		else
			break;
	}
	while((*lista)->fpos != check)
	{
		if(ft_lstplen(*lista, ttmp) >= (ft_lstlen(*lista) / 2) + 1)
		{
			write(1, "rra\n", 4);
			ft_rra(lista);
		}
		else
		{
			write(1, "ra\n", 3);
			ft_ra(lista);
		}
	}
}
