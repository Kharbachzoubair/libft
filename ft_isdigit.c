/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:54:45 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/31 13:59:37 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c1 = '3';
	char	c2 = '>';

	printf("'%c' is %s\n",
		c1, ft_isdigit(c1) ? "a digit character" : "NOT a digit character");
	printf("'%c' is %s\n",
		c2, ft_isdigit(c2) ? "a digit character" : "NOT a digit character");
	return (0);
}*/
