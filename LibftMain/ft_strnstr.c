/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:41:25 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 16:43:41 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && haystack[i + j] && i + j < len)
			j++;
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str1[] = "Hello World";
// 	char str2[] = "World";
// 	char str3[] = "Hello World";
// 	char str4[] = "World";
// 	printf("%s\n", ft_strnstr(str1, str2, 20));
// 	printf("%s\n", strnstr(str3, str4, 20));
// }