/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:40:21 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/22 12:42:39 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
    {
        return (c + 32);
    }
    return c;
}
int main ()
{
    char c1 = 'A';
     printf("'%c' est '%c'\n", c1, ft_tolower(c1));
    return 0;
}