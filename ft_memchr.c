/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:24:16 by haeris            #+#    #+#             */
/*   Updated: 2022/02/19 17:18:44 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//s parametresi ile gösterilen bellek bölgesinin n parametre değeri kadar
//ilk byte ında c parametresi ile gösterilen değerin ilk geçtiği yeri arar
//ve bu bellek adresini gösteren bir işaretçi geri dödürür
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)str + i) == (unsigned char )c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
/*int	main()
{
	char	k[] = "kinaz";//yazdıgımız deger ve sonrasını gosterir
	printf("%s", ft_memchr(k, 'n', 6));
}*/
