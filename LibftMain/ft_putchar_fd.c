/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:49:06 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 16:21:41 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

#include <fcntl.h>

int	main(void)
{
	int fd;
	fd = open("test.txt", O_WRONLY);
	ft_putchar_fd('a', fd);
	ft_putchar_fd('Z', 3);
	close(fd);
}

// text.txt içeriği: "aZ" olamalı ve test.txt aynı dizinde bulunmalı