/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:09:13 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/22 12:18:41 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(const char *str)
{
    int i;
    i =0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
int main() {
    char Str[] = "danger"; 
    printf("String: '%s', Length: %d\n", Str, ft_strlen(Str));
    return 0;
}