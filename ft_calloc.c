/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:20:26 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/31 13:49:47 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	char	*str;
	size_t	i;

	if (count == 0 || size == 0 || size > SIZE_MAX / count)
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
/*int	main(void)
{
	size_t	count = 5;
	size_t	size = sizeof(int);
	int		*arr;
	size_t	i;

	arr = (int *)ft_calloc(count, size);
	if (arr == NULL)
	{
		perror("Memory allocation failed");
		return (1);
	}
	i = 0;
	while (i < count)
	{
		arr[i] = i * 10;
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/
