/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:07:34 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 16:47:07 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("Input: A			Output: %c\n", ft_toupper('A'));
// 	printf("Input: C			Output: %c\n", ft_toupper('C'));
// 	printf("Input: c			Output: %c\n", ft_toupper('c'));
// 	printf("Input: Yeni satır		Output: %c\n", ft_toupper('\n'));
// 	printf("Input: Tilda			Output: %c\n", ft_toupper('~'));
// 	printf("Input: Nokta			Output: %c\n", ft_toupper('.'));
// }