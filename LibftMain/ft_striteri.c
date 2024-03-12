/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:03:24 by tkurukay          #+#    #+#             */
/*   Updated: 2024/01/19 16:37:08 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void	ft_print(unsigned int i, char *s)
// {
// 	printf("%d: %c\n", i, *s);
// }

// int main(void)
// {
// 	char str[] = "Hello World";
// 	ft_striteri(str, &ft_print);
// }