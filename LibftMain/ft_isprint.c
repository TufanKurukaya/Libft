/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:48:40 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 15:11:42 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("Input: 4			Output: %d\n", ft_isprint('4'));
// 	printf("Input: C			Output: %d\n", ft_isprint('C'));
// 	printf("Input: c			Output: %d\n", ft_isprint('c'));
// 	printf("Input: Yeni satır		Output: %d\n", ft_isprint('\n'));
// 	printf("Input: Nokta			Output: %d\n", ft_isprint('.'));
// 	printf("Input: Tilda			Output: %d\n", ft_isprint('~'));
// }