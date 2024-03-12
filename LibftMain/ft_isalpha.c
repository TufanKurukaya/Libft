/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:53:10 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 14:40:39 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("Input: 4			Output: %d\n", ft_isalpha('4'));
// 	printf("Input: C			Output: %d\n", ft_isalpha('C'));
// 	printf("Input: c			Output: %d\n", ft_isalpha('c'));
// 	printf("Input: Yeni satır		Output: %d\n", ft_isalpha('\n'));
// 	printf("Input: Tilda			Output: %d\n", ft_isalpha('~'));
// 	printf("Input: Nokta			Output: %d\n", ft_isalpha('.'));
// }