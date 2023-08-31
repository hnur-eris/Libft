/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:13:37 by haeris            #+#    #+#             */
/*   Updated: 2022/02/15 20:06:41 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*position;

	if (!lst)
		return ;
	position = lst;
	while (position != NULL)
	{
		(*f)(position->content);
		position = position->next;
	}
}
/*void	f(void *lst)
{
	char *content;
	int i = 0;
	content = (char *)lst;
	while(content[i])
	{
		content[i] = 'x';
		i++;
	}
}
int main ()
{
	t_list *a;

	a = ft_lstnew(ft_strdup("kelime"));
	ft_lstiter(a, f);
	printf("%s", a->content);

}*/
