/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:34:55 by haeris            #+#    #+#             */
/*   Updated: 2022/02/21 15:05:05 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//base form first we just creative one variable then we look into.
//باسه فورم بير دغيشكه نن اجي لاظيم
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = ((t_list *)malloc(sizeof(t_list)));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = (NULL);
	return (new);
}
/*int	main()
{
	t_list	*a;
	a = ft_lstnew("pff");
	printf("%s", a->content);
}*/
