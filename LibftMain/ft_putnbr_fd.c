/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:27:32 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 16:29:13 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}

// #include <fcntl.h>
// #include <unistd.h>
// #include <limits.h>
// int main(void)
// {
// 	int fd;
// 	fd = open("test.txt", O_WRONLY);
// 	ft_putnbr_fd(INT_MAX, fd);
// 	ft_putnbr_fd(INT_MIN, 3);
// 	ft_putnbr_fd(0, fd);
// 	close(fd);
// }