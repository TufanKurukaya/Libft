/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:27:25 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 16:25:46 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// #include <fcntl.h>
// #include <unistd.h>

// int main(void)
// {
// 	int fd;
// 	fd = open("test.txt", O_WRONLY);
// 	ft_putendl_fd("Hello World", fd);
// 	ft_putendl_fd("Hello World", 3);
// 	close(fd);
// }
