t_list	*ft_lstnew(void *content)
{
	t_list *list;

	list = (t_list *)malloc(1 * sizeof(t_list));
	if(!list)
		return (0);
	list->content = (void *)malloc(4096 * sizeof(void));
	if(!list->content)
		return (0);
	return (list);
}