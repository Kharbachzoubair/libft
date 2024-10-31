/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:44:29 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/31 13:08:25 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*int main(void)
{
    char buffer[10]; // Create a buffer of 10 characters

    // Set all bytes of buffer to 'A'
    for (int j = 0; j < sizeof(buffer); j++)
    {
        buffer[j] = 'A';
    }

    // Clear the buffer (set all bytes to 0)
    bzero(buffer, sizeof(buffer));

    // Print the cleared buffer contents without using a loop
    printf("%d %d %d %d %d %d %d %d %d %d\n", 
           buffer[0], buffer[1], buffer[2], buffer[3], 
           buffer[4], buffer[5], buffer[6], buffer[7], 
           buffer[8], buffer[9]); // Should print 0 ten times

    return (0); // Return success
}
*/
