/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:03:14 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/22 19:23:52 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	i;
	i = 0;
	while ((s1[i] && s2[i] )&& i < n)
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i] ;
		}
		i++;
	}
	if (i < n)
		return s1[i] - s2[i] ;
	return (0);
}


int	main(void)
{
	char *str1;
	char *str2;
	char *str3;

	str1 = "hello";
	str2 = "dello";
	str3 = "hella";

	
	printf("%d\n", ft_strncmp(str1, str2, 5));  
	printf("%d\n", ft_strncmp(str1, str3, 5));  
	printf("%d\n", ft_strncmp(str1, str3, 4));

	return (0);
}