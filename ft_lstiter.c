#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*head;

	head = lst;
	while(head)
	{
		f(head->content);
		head = head->next;
	}
}