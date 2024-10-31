/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:07:54 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/31 13:56:54 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char c1 = 'A';
// 	char c2 = 'z';
// 	char c3 = '1';
// 	char c4 = '!';

// 	printf("Testing ft_isalpha:\n");
// 	printf("'%c' is %s\n", c1,
// 		ft_isalpha(c1) ? "an alphabetic character"
// 		: "NOT an alphabetic character");
// 	printf("'%c' is %s\n", c2,
// 		ft_isalpha(c2) ? "an alphabetic character"
// 		: "NOT an alphabetic character");
// 	printf("'%c' is %s\n", c3,
// 		ft_isalpha(c3) ? "an alphabetic character"
// 		: "NOT an alphabetic character");
// 	printf("'%c' is %s\n", c4,
// 		ft_isalpha(c4) ? "an alphabetic character"
// 		: "NOT an alphabetic character");

// 	return (0);
// }
