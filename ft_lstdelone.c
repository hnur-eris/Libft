/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:08:12 by haeris            #+#    #+#             */
/*   Updated: 2022/02/21 16:19:08 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//دىره ك ايجيني سيلييور
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*void	del(void *content)
{
	free(content);
}
int	main()
{
	t_list *a;
	t_list *b;
	t_list *c;

	a = ft_lstnew(ft_strdup("adasdas"));
	b = ft_lstnew(ft_strdup("yine"));
	c = ft_lstnew(ft_strdup("bir"));
	a->next = b;
	b->next = c;
	//printf("%s\n", c->content);
	ft_lstdelone(b, del);
    printf("%s", b->content);
}*/
