#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*head;
	t_list	**map;

	map = (t_list **)malloc(sizeof(t_list *));
	if(!map)
		return (0);
	*map = ft_lstnew(f(lst->content));
	head = lst->next;
	while(head)
	{
		new_node = ft_lstnew(f(lst->content));
		if(!new_node)
			return (ft_lstclear(map, *del), NULL);
		ft_lstadd_back(map, new_node);
		head = lst->next;
	}
	return (*map);
}