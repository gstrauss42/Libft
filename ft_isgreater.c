#include "libft.h"

int	ft_isgreater(t_list *listb, t_list *node)
{
	if(listb && node)
	{
		while(listb)
		{
			if(listb->fpos > node->fpos)
				return(0);
			listb = listb->next;
		}
	}
	return(1);
}
