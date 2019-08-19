#include "libft.h"

t_list	*ft_lstlast(t_list *head)
{
	if(head != NULL)
	{
		while(head)
		{
			if(head->next)
				head = head->next;
			else break;
		}
	}
	return(head);
}
