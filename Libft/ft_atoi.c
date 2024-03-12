/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:10:38 by tkurukay          #+#    #+#             */
/*   Updated: 2024/02/16 12:50:49 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str, int base)
{
	int	i;
	int	sing;
	int	result;

	i = 0;
	sing = 1;
	result = 0;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sing = sing * (-1);
		}
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f'))
	{
		result = result * base;
		if (base <= 10)
		{
			result += str[i] - '0';
		}
		else if (base > 10 && str[i] >= 'A' && str[i] <= 'F')
		{
			result += str[i] - 'A' + 10;
		}
		else if (base > 10 && str[i] >= 'a' && str[i] <= 'f')
		{
			result += str[i] - 'a' + 10;
		}
		
		
		i++;
	}
	return (result * sing);
