/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:49:50 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/29 10:44:04 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (j < len && haystack[i + j] == needle[j] && haystack[i + j])
				j++;
			if (!needle[j])
				return ((char *)haystack + i);
		}
		i++;
		len--;
	}
	return (NULL);
}


