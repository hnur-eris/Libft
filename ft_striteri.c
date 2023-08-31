/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:28:12 by haeris            #+#    #+#             */
/*   Updated: 2022/02/10 19:00:08 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = -1;
	if (!s)
		return ;
	while (s[++i])
		f(i, s + i);
}
/*void	f(unsigned int a, char *m)
{
	*m = *m + 1;
}

int	main()
{
	char str[] = "kalemlikler";
	ft_striteri(str, f);
	printf("%s", str);
}*/
