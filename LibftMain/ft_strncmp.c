/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:48:06 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 16:42:52 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str1[] = "Hello World";
// 	char str2[] = "Hello World";
// 	printf("%d\n", ft_strncmp(str1, str2, 5));
// 	printf("%d\n", strncmp(str1, str2, 5));
// }