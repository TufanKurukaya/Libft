/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:19:56 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 13:23:23 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Input: 4			Output: %d\n", ft_isalnum('4'));
// 	printf("Input: C			Output: %d\n", ft_isalnum('C'));
// 	printf("Input: c			Output: %d\n", ft_isalnum('c'));
// 	printf("Input: Yeni satır		Output: %d\n", ft_isalnum('\n'));
// 	printf("Input: Tilda			Output: %d\n", ft_isalnum('~'));
// 	printf("Input: Nokta			Output: %d\n", ft_isalnum('.'));
// }
