/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:46:38 by haeris            #+#    #+#             */
/*   Updated: 2022/02/21 14:56:46 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//array listleri tutan bir array list = çift pointer
#include "libft.h"

static int	cwords(const char *s, char c)
{
	int	rtn;

	rtn = 0;
	while (s && *s)
	{
		while (*s == c)
			s++;
		rtn += *s != 0;
		s = ft_strchr(s, c);
	}
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**rtn;
	int		i;
	size_t	len;

	if (!s)
		return (NULL);
	words = cwords(s, c);
	rtn = malloc((words + 1) * sizeof(char *));
	if (!rtn)
		return (0);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = ft_strchr(s, c) - s;
		rtn[i] = ft_substr(s, 0, len);
		s += len;
		if (!rtn[i++])
			return (0);
	}
	rtn[i] = 0;
	return (rtn);
}
/*int main()
{
	char **str;
	int i = 0;
	str = ft_split("kalemlikler", 'm');
	
	while (str[i])
	{
		printf("%s", str[i++]);
	}
}*/
/*int	main()
{	
	char	str[] = "selam selam2";
	char 	**split;
    split = ft_split(str, 32);
	printf("%s%s", split[0], split[1]);
}*/
