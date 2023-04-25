t_list	*ft_lstlast(t_list *lst)
{
	t_list *head;

	if(!lst)
		return (0);
	head = lst;
	while(head->next)
		head = head->next;
	return (head);
}