/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:43:40 by haeris            #+#    #+#             */
/*   Updated: 2022/02/12 17:11:56 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*#include <fcntl.h>
int	main()
{
	int fd = open("denme.txt", O_CREAT | O_RDWR, 0777);
	ft_putstr_fd("sayende", fd);
}*/
