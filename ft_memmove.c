/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:10:57 by haeris            #+#    #+#             */
/*   Updated: 2022/02/19 17:12:25 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//aynı string üzerinden kopyalama yaptığımızda hata almamak için
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (dest == src || !len)
		return (dest);
	i = 0;
	if (dest < src)
	{
		while (i < len)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*((unsigned char *)dest + len - 1)
				= *((unsigned char *)src + len - 1);
			len--;
		}
	}
	return (dest);
}
/*int	main()
{
	char str[] = "merhaba";
	ft_memmove(str + 3, str, 4);
	printf("%s", str);
}*/
