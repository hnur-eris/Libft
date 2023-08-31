/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:03:02 by haeris            #+#    #+#             */
/*   Updated: 2022/02/19 16:51:31 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//s parametresi ile gösterilen karakter dizisinde c parametresi ile
//gösterilen değerin İLK geçtiği yeri arar ve bu bellek adresini
//gösteren bir işaretçi döndürür.
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == (char)c)
			return ((char *)(str + index));
		index++;
	}
	if (str[index] == (char)c)
		return ((char *)(str + index));
	return (NULL);
}
/*int	main()
{
	char str[] = "kalemlikler";
	printf("%s", ft_strchr(str, 'l'));
}*/
