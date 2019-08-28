#include "libft.h"

int		ft_posdif(t_list *head, t_list *check)
{
	int i = 0;
	t_list *tmp;
	t_list *ttmp = head;
	t_list *hold = head;
	int val = 1000000;
	if(head->fpos && check)
	{
		while(true)
		{
			if(head->fpos > check->fpos && head->fpos < val)
			{
				tmp = head;
				val = head->fpos;
			}
			if(head->fpos > hold->fpos)
				hold = head;
			if(head->next)
				head = head->next;
			else
				break;
		}
		head = ttmp;
		if(val == 1000000)
		{
			while(head != hold)
			{
				head = head->next;
				i++;
			}
		}
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
