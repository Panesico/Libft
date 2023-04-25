int	ft_lstsize(t_list *lst)
{
	t_list *head;
	size_t count;

	if(!lst)
		return (0);
	count = 1;
	head = lst->next;
	while(head)
	{
		count++;
		head = head->next;
	}
	return (count);
}