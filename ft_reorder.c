#include "libft.h"

void	ft_reorder(t_list **listb)
{
	t_list *tmp = (*listb);
	t_list *ttmp;
	int check = -1;
	while(true)
	{
		if(tmp->fpos > check)
		{
			ttmp = tmp;
			check = tmp->fpos;
		}
		if(tmp->next)
			tmp = tmp->next;
		else
			break;
	}
	while(*listb != ttmp)
	{
		if(ft_lstplen(*listb, ttmp) >= ft_lstlen(*listb) / 2)
		{
			write(1, "rrb\n", 4);
			ft_rrb(listb);
		}
		else
		{
			write(1, "rb\n", 3);
			ft_rb(listb);
		}
	}
}
