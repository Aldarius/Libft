/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:01:41 by lminta            #+#    #+#             */
/*   Updated: 2019/08/25 20:50:58 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_map(t_list **alst)
{
	if (alst && *alst)
	{
		if ((*alst)->next)
			free_map(&(*alst)->next);
		free((*alst)->content);
		free(*alst);
		*alst = NULL;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *buff;
	t_list *result;

	if (!lst || !f)
		return (0);
	buff = f(lst);
	if (!(result = ft_lstnew(buff->content, buff->content_size)))
		return (0);
	lst = lst->next;
	head = result;
	while (lst)
	{
		buff = f(lst);
		if (!(result->next = ft_lstnew(buff->content, buff->content_size)))
		{
			free_map(&head);
			return (0);
		}
		result = result->next;
		lst = lst->next;
	}
	return (head);
}
