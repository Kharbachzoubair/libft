/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:01 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/29 10:45:15 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	int_len(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		count = 1;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		intg;
	int		count;
	char	*ma;

	intg = 1;
	count = int_len(n);
	ma = (char *)malloc((count + 1) * sizeof(char));
	if (!ma)
		return (NULL);
	if (n == 0)
		ma[0] = '0';
	if (n < 0)
	{
		ma[0] = '-';
		intg = -1;
	}
	ma[count] = '\0';
	while (n && count--)
	{
		ma[count] = (n % 10) * intg + '0';
		n /= 10;
	}
	return (ma);
}

