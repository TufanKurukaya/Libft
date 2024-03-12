/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:52:26 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 15:56:06 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}

// #include <stdio.h>

// int main(void)
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	ft_memset(arr, 4, (sizeof(int) * 4));
// 	for (int i = 0; i < 9; i++)
// 	{
// 		printf("%d\n", arr[i]);
// 	}
// }

// Cıktı: 67372036, 67372036, 67372036, 67372036, 5, 6, 7, 8, 9 Şeklinde olur.