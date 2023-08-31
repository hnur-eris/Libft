/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:47:31 by haeris            #+#    #+#             */
/*   Updated: 2022/02/19 17:01:46 by haeris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
//stringin sonuna yeni satır koy
/*#include <fcntl.h>
int	main()
{
	int fd = open("deneme.txt", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd("nur", fd);
}*/
