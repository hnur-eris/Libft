/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:59:53 by haeris            #+#    #+#             */
/*   Updated: 2022/02/21 15:09:15 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ياز باغلا
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*position;

	i = 0;
	position = lst;
	while (position != NULL)
	{
		position = position->next;
		i++;
	}
	return (i);
}
/*int	main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	a = ft_lstnew("klm");
	b = ft_lstnew("asd");
	c = ft_lstnew("dfgh");
	a->next = b;//boyutunu gösteriyo. kaç eleman varsa onu
	b->next = c;
	printf("%d", ft_lstsize(a));
}*/
