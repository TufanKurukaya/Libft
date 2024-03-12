/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:19:16 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 16:39:34 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str1[20] = "Hello ";
// 	char str2[] = "World";
// 	char str3[20] = "Hello ";
// 	char str4[] = "World";
// 	printf("%lu\n", ft_strlcpy(str1, str2, 20));
// 	printf("%s\n", str1);
// 	printf("%lu\n", strlcpy(str3, str4, 20));
// 	printf("%s\n", str3);
// }