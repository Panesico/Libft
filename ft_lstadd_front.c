void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *swap;

	swap = *lst;
	*lst = new;
	*lst->next = swap;
}