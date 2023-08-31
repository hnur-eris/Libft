/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:03:32 by haeris            #+#    #+#             */
/*   Updated: 2022/02/10 19:32:11 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!dest || !src)
		return (0);
	while (src[count])
		count++;
	while (src[i] && i + 1 < dsize)
	{
		dest[i] = src[i];
		i++;
	}
	if (dsize)
		dest[i] = '\0';
	return (count);
}
/*int	main()
{
	char dest[50] = "dest";
	const char src[] = "source";

	
unsigned long gelen = ft_strlcpy(dest,src,4);
	printf("%zu",gelen);
printf("%zu",ft_strlcpy(dest,src,7));
printf("%s", dest);
}*/
