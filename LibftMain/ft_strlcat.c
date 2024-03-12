/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:22:11 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 16:38:59 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[j])
		j++;
	if (dstsize)
	{
		while (src[i] && (i + j < dstsize - 1))
		{
			dst[i + j] = src[i];
			i++;
		}
	}
	dst[i + j] = '\0';
	while (src[i])
		i++;
	if (dstsize < j)
		return (i + dstsize);
	return (i + j);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str1[20] = "Hello ";
// 	char str2[] = "World";
// 	char str3[20] = "Hello ";
// 	char str4[] = "World";
// 	printf("%lu\n", ft_strlcat(str1, str2, 20));
// 	printf("%s\n", str1);
// 	printf("%lu\n", strlcat(str3, str4, 20));
// 	printf("%s\n", str3);
// }
