/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:56:22 by haeris            #+#    #+#             */
/*   Updated: 2022/02/21 15:07:24 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//اكى شه يى باغلا
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		new->next = NULL;
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
/*int	main()
{
	t_list *a;
	t_list *b;
	a = ft_lstnew("pff");
	b = ft_lstnew("zor");
	ft_lstadd_front(&a, b);
	printf("%s", a->content);
}*/
