/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:33:42 by haeris            #+#    #+#             */
/*   Updated: 2022/02/16 15:36:28 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long nb)
{
	int	l;

	l = 0;
	if (nb == 0)
		l = 1;
	else if (nb < 0)
	{
		nb = -nb;
		l++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*string;
	int		i;

	nb = n;
	i = len(nb);
	string = (char *)malloc (sizeof(char) * (len(nb) + 1));
	if (!string)
		return (NULL);
	string[i--] = '\0';
	if (nb == 0)
		string[0] = '0';
	if (nb < 0)
	{
		string[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		string[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (string);
}
/*int main()
{//maloocta yer ayırtamadığımızda null gösterilmesini istiyoruz
	int c = -6;
	printf("%s", ft_itoa(c));
}*/
