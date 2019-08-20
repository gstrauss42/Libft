#include "libft.h"

int		ft_posdif(t_list *head, t_list *check)
{
	int i= 0;
	t_list *hold = head;
	t_list *tmp = head;
	if(check->fpos > tmp->fpos)
	{
		while(tmp->next && check->fpos > tmp->next->fpos)
		{
			if(tmp->fpos > hold->fpos)
				hold = tmp;
			if(tmp->next)
			{
				i++;
				tmp = tmp->next;
			}
			else
				break;
		}
		if(!tmp->next && check->fpos > tmp->fpos)
		{
			i = 0;
			while(head != hold)
			{
				if(head->next)
					head = head->next;
				else
					break;
				i++;
			}
		}
	}
	return(i);
}
