/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:22:11 by tkurukay          #+#    #+#             */
/*   Updated: 2024/06/15 22:19:12 by tkurukay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[j])
		j++;
	if (dstsize)
	{
		while (src[i] && (i + j < dstsize - 1))
		{
			dst[i + j] = src[i];
			i++;
		}
	}
	dst[i + j] = '\0';
	while (src[i])
		i++;
	if (dstsize < j)
		return (i + dstsize);
	return (i + j);
}
