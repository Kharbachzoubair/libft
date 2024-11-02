/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:24:57 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/01 15:41:07 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h> 
#include <stdio.h>

void transform_iteri(unsigned int index, char *c) {
    if (c) {
        *c += 1; // Example transformation: increment character by 1
    }
}
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned    int i;
    if (!s)
    {
        return;
    }
    
    i = 0;
    while (s[i])
    {
       f(i,&s[i]);
        i++;
    }
}
int main() {
    char str[] = "hello"; // Example string to modify

    ft_striteri(str, transform_iteri); // Apply `ft_striteri` with `transform_iteri`
    printf("Modified string: %s\n", str); // Print the modified string

    return 0;
}
