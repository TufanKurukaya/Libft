/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:06:14 by tkurukay          #+#    #+#             */
/*   Updated: 2023/12/28 16:39:25 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	a = malloc(count * size);
	if (a)
	{
		ft_bzero(a, count * size);
		return (a);
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		*ptr;
// 	size_t	count;
// 	size_t	size;

// 	count = 5;
// 	size = sizeof(int);
// 	ptr = malloc(count * size);
// 	if (ptr)
// 	{
// 		printf("Adres: %p\n", ptr);
// 	}
// 	else
// 		printf("Adres: NULL\n");
// 	free(ptr);
// }
