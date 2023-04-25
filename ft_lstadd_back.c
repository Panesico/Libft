void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *head;

	if(!lst)
		return ;
	head = *lst;
	while(head->next)
		head = head->next;
	head->next = new;
}