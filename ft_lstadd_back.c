/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:49:26 by haeris            #+#    #+#             */
/*   Updated: 2022/02/21 15:14:02 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//صونونا اكله مه يابىيو
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*position;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		position = ft_lstlast(*lst);
		position->next = new;
	}
}
/*int	main()
{	//sonuna ekleme yapıyo sürekli yazmıyoruz. last tan ayıran ozellik bu
	t_list *a;
	t_list *b;
	t_list *c;
	a = ft_lstnew("kal");
	b = ft_lstnew("git");
	c = ft_lstnew("terk et");
	a->next = b;
	ft_lstadd_back(&a,c);
	printf("%s", a->next->next->content);
}*/
