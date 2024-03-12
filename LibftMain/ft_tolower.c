/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:12:20 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 16:46:35 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("Input: A			Output: %c\n", ft_tolower('A'));
// 	printf("Input: C			Output: %c\n", ft_tolower('C'));
// 	printf("Input: c			Output: %c\n", ft_tolower('c'));
// 	printf("Input: Yeni satır		Output: %c\n", ft_tolower('\n'));
// 	printf("Input: Tilda			Output: %c\n", ft_tolower('~'));
// 	printf("Input: Nokta			Output: %c\n", ft_tolower('.'));
// }
