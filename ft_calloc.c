/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:20:26 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/16 10:16:26 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	char	*str;
	size_t	i;

	if (count == 0 || size == 0)
		return (malloc(1));
	if (count > (size_t) - 1 / size)
		return (NULL);
	total = count * size;
	str = (char *)malloc(total);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
