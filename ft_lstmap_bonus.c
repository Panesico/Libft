/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgfern <jorgfern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:02:32 by jorgfern          #+#    #+#             */
/*   Updated: 2023/04/28 20:45:21 by jorgfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*first_node;
	t_list	*head;

	if (!lst)
		return (0);
	first_node = 0;
	head = lst;
	while (head)
	{
		new_node = ft_lstnew(f(head->content));
		if (!new_node)
		{
			ft_lstclear(&first_node, *del);
			return (NULL);
		}
		ft_lstadd_back(&first_node, new_node);
		head = head->next;
	}
	return (first_node);
}
