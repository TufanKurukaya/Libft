/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:12:07 by tkurukay          #+#    #+#             */
/*   Updated: 2024/06/15 22:13:40 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
