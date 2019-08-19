#include "libft.h"

void	ft_lstpush(t_list **head, t_list *node, int pos)
{
	t_list *tmp;
	t_list *tmph = *head;
	if(ft_lstlen(*head) + 1 == pos)
	{
		ft_lstend(*head, node);
		return;
	}
	if(pos == 0)
	{
		ft_lstadd(head, node);
		return;
	}
	if(pos == 1)
		tmp = *head;
	while(pos != 0)
	{
		if(tmph->next)
		{
			tmph = tmph->next;
			pos--;
		}
		else
			break;
		if(pos != 0)
			tmp = tmph;
	}
	if(pos == 0)
	{
		node->next = tmp->next;
		tmp->next = node;
	}
}
