/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:54:11 by haeris            #+#    #+#             */
/*   Updated: 2022/02/15 15:00:15 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	ft_memset(b, '\0', n);
}
/*int	main()
{
	char	isim[] = "kinaz";
	int	i = 0;

	ft_bzero(isim, 2);
	while (isim[i++] != 'z')
		write(1, &isim[i], 1);
}*/
