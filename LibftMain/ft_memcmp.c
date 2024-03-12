/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:41:30 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 15:23:33 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = 0;
	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (i < n)
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str1[] = "Hello World";
// 	char str2[] = "Hello World";
// 	char str3[] = "DENEME YAZISI";
// 	printf("%d\n", ft_memcmp(str1, str2, 11));
// 	printf("%d\n", ft_memcmp(str3, str2, 11));
// }