/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:01:52 by haeris            #+#    #+#             */
/*   Updated: 2022/02/21 16:20:02 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ان صونونجوصونن ايجيني قوسته رىيو
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*int	main()
{	//en sonuncusunu gösteriyo
	t_list	*a;
	t_list *b;
	t_list	*c;
	a = ft_lstnew("asd");
	b = ft_lstnew("bnm");
	c = ft_lstnew("bghjk");
	a->next = b;
	b->next = c;
	printf("%s", ft_lstlast(a)->content);
}*/
