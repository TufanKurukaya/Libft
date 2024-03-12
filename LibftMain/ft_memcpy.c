/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:43:31 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 15:26:31 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)d);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "Hello World";
// 	ft_memcpy(str + 3, str, 9);
// 	printf("%s\n", str);
// }