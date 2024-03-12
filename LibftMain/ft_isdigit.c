/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:15:11 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 15:10:26 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("Input: 4			Output: %d\n", ft_isdigit('4'));
// 	printf("Input: C			Output: %d\n", ft_isdigit('C'));
// 	printf("Input: c			Output: %d\n", ft_isdigit('c'));
// 	printf("Input: Yeni satır		Output: %d\n", ft_isdigit('\n'));
// 	printf("Input: Nokta			Output: %d\n", ft_isdigit('.'));
// 	printf("Input: Tilda			Output: %d\n", ft_isdigit('~'));
// }