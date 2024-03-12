/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:49:29 by tkurukay          #+#    #+#             */
/*   Updated: 2023/12/28 16:20:52 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n-- > 0)
	{
		*p++ = 0;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		arr[] = {1, 5, 2, 5, 63, 6, 4};
// 	size_t	n;

// 	n = 5;
// 	ft_bzero(arr, (sizeof(int) * n));
// 	for (size_t i = 0; i < n + 2; i++)
// 	{
// 		printf("%d,", arr[i]);
// 	}
// }
