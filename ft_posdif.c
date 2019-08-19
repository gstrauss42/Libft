#include "libft.h"

int		ft_posdif(t_list *head, t_list *check)
{
	if(head && check)
	{
		int ret = 0;
		while(check->fpos > head->fpos)
		{
			if(head->next)
			{
				ret++;
				head = head->next;
			}
			else
				break;
		}
		return(ret);
	}
	return('\0');
}
