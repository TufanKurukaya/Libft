/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:12:07 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 15:20:44 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*x;

	x = s;
	i = 0;
	while (i < n)
	{
		if (x[i] == (char)c)
		{
			return ((void *)&x[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "Hello World";
// 	char *p;
// 	p = ft_memchr(str, 'W', 11);
// 	printf("%s\n", p);
// }