/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:08:14 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/22 15:30:29 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(const char *str) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}

char *ft_strrchr(const char *str, int c) {
    int len = ft_strlen(str);  
    while (len >= 0) {  
        if (str[len] == c) {
            return (char *)&str[len];  
        }
        len--;  
    }
    return NULL;  
}

int main() {
    char c1 = 'c';
    char str[] = "carootce";  
    
    char *result = ft_strrchr(str, c1);  

    if (result) {
        printf("Found '%c' in '%s'\n", c1, result);  
    } else {
        printf("Character '%c' not found in '%s'\n", c1, str);
    }

    return 0;
}
