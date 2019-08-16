#include "libft.h"

t_list	*ft_lstvalmake(t_list **head, char *input, int value)
{
	if (!*head)
		*head = ft_lstnew(input, ft_strlen(input) + 1);
	else
		ft_lstend(*head, ft_lstnew(input, ft_strlen(input) + 1));
	t_list *tmp = *head;
	while(true)
	{
		if(tmp->next)
			tmp = tmp->next;
		else
			break;
	}
	tmp->fpos = value;
	return (*head);
}
