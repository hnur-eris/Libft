/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:37:49 by haeris            #+#    #+#             */
/*   Updated: 2022/02/19 17:25:57 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//s1 parametresi ile gösterilen bellek bölgesinin n parametre değeri kadar
//ilk n byte ını s2 parametresi ile gösterilen bellek bölgesi ile
//karşılaştırılır. Eğer her iki bellek bölgesindeki tüm değerler aynı ise
//sıfır değeri, aksi takdirde sıfırdan farklı bir değer geri döndürür.
//parametre = işleme giren değerlere denir
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		idx;

	idx = 0;
	while (idx < n)
	{
		if (*((unsigned char *)s1 + idx)
			== *((unsigned char *)s2 + idx))
			idx++;
		else
			return ((*((unsigned char *)s1 + idx))
				- *((unsigned char *)s2 + idx));
	}
	return (0);
}
/*int	main()
{
	char k[] = "kinazy";
	char s[] = "kinazz";
	printf("%d", ft_memcmp(k, s, 9));
}*/
