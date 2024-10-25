/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:24:43 by hugozlu           #+#    #+#             */
/*   Updated: 2024/10/25 12:10:17 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"//()

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;
	t_list	*content;

	if (!lst || !f || !del)
		return (0);
	newlist = 0;
	while (lst)
	{
		content = f(lst->content);
		temp = ft_lstnew(content);
		if (!temp || !content)
		{
			if (temp)
				ft_lstclear(&temp, del);
			if (content)
				del(content);
			ft_lstclear(&newlist, del);
			return (0);
		}
		ft_lstadd_back(newlist, temp);
		lst = lst->next;
	}
	return (newlist);
}
