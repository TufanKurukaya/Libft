/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:34:46 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 15:10:22 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("Input: 4			Output: %d\n", ft_isascii('4'));
// 	printf("Input: Ü			Output: %d\n", ft_isascii("Ü"[0]));
// 	printf("Input: ü			Output: %d\n", ft_isascii("ü"[0]));
// 	printf("Input: Yeni satır		Output: %d\n", ft_isascii('\n'));
// 	printf("Input: Nokta			Output: %d\n", ft_isascii('.'));
// 	printf("Input: Tilda			Output: %d\n", ft_isascii('~'));
// }