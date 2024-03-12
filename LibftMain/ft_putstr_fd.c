/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:55:32 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 16:29:06 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// #include <fcntl.h>

// int main(void)
// {
// 	int fd;
// 	fd = open("test.txt", O_WRONLY);
// 	ft_putstr_fd("Hello World", fd);
// 	ft_putstr_fd("Hello World", 3);
// 	close(fd);
// }