/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:11:06 by haeris            #+#    #+#             */
/*   Updated: 2022/02/21 15:20:48 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ليسته يى سيلييور
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*position;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		position = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = position;
	}
}
/*void  del(void *content)
{
	free(content);
}
int	main(void)
{
	t_list *a;
	t_list *b;
	t_list *c;
	a = ft_lstnew(ft_strdup("a"));
	b = ft_lstnew(ft_strdup("b"));
	c = ft_lstnew(ft_strdup("c"));
	a->next = b;
	b->next = c;
    ft_lstclear(&a, del);
}*/
