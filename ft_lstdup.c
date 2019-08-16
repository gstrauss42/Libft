#include "libft.h"

t_list	*ft_lstdup(t_list *head)
{
	t_list *ret = NULL;
	while(true)
	{
		ret = ft_lstvalmake(&ret, head->content, head->fpos);
		if(head->next)
			head= head->next;
		else
			break;
	}
	return(ret);
}
