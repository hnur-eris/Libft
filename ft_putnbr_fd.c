/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:55:48 by haeris            #+#    #+#             */
/*   Updated: 2022/02/19 17:05:01 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
/*#include <fcntl.h>
int	main()
{//Sayıyı 10’a bölerek ve + veya - olduğunu belirterek yazıyor
	int fd = open("deneme.txt", O_CREAT | O_RDWR, 0777);
	ft_putnbr_fd('6', fd);
}*/
//ft_putstr_fd(ft_itoa(n), fd);
