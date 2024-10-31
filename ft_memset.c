/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:01:43 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/31 16:08:41 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	buffer[10]; // Create a buffer of 10 characters

// 	ft_memset(buffer, 'A', sizeof(buffer)); // Set all bytes to 'A'
// 	printf("%c %c %c %c %c %c %c %c %c %c\n",
// 		buffer[0], buffer[1], buffer[2], buffer[3],
// 		buffer[4], buffer[5], buffer[6], buffer[7],
// 		buffer[8], buffer[9]); // Should print 'A' ten times

// 	ft_memset(buffer, 0, sizeof(buffer));
// 	printf("%d %d %d %d %d %d %d %d %d %d\n",
// 		buffer[0], buffer[1], buffer[2], buffer[3],
// 		buffer[4], buffer[5], buffer[6], buffer[7],
// 		buffer[8], buffer[9]); // Should print 0 ten times

// 	return (0); // Return success
// }