#include "libft.h"

int		ft_posdif(t_list *head, t_list *check)
{
	int i = 0;
	t_list *tmp;
	t_list *ttmp = head;
	int val = 1000000;
	if(head->fpos)
	{
		while(true)
		{
		if(head->fpos > check->fpos && head->fpos < val)
			{
				tmp = head;
				val = head->fpos;
			}
			if(head->next)
				head = head->next;
			else
				break;
		}
		head = ttmp;
		if(val == 1000000)
			return(0);
		else
		{
			while(head != tmp)
			{
				head = head->next;
				i++;
			}
		}
	}
	return(i);
}
