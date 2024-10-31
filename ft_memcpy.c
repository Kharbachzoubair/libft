/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:42:33 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/31 15:23:14 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // for size_t
#include <stdio.h>  // for printf

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s; 
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	unsigned char	src[] = "Hello, World!";
	unsigned char	dest[20]; // Ensure this is large enough to hold the copied string

	my_memcpy(dest, src, sizeof(src)); // Copy size of src including null terminator

	printf("Source: %s\n", src); // Print the original source
	printf("Destination: %s\n", dest); // Print the copied destination

	return (0); // Return success
}*/
