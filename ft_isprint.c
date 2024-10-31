/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:04:48 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/31 14:03:20 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c1 = 'A';
	char	c2 = '\n';
	char	c3 = ' ';
	char	c4 = 127;

	printf("'%c' is %s\n", c1, ft_isprint(c1) ? "printable" : "NOT printable");
	printf("'%c' is %s\n", c2, ft_isprint(c2) ? "printable" : "NOT printable");
	printf("'%c' is %s\n", c3, ft_isprint(c3) ? "printable" : "NOT printable");
	printf("'%c' is %s\n", c4, ft_isprint(c4) ? "printable" : "NOT printable");

	return (0);
}*/
