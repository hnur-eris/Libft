/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:11:05 by haeris            #+#    #+#             */
/*   Updated: 2022/02/21 18:24:41 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//s parametresi ile gösterilen karakter dizisinde c parametresi
//ile gösterilen değerin SON geçtiği yeri arar ve bu bellek
//adresini gösteren bir işaretçi geri döndürür.
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
/*int	main()
{
	char	str[] = "kalemlikler";
	printf ("%s", ft_strrchr(str, 'k'));
}*/
