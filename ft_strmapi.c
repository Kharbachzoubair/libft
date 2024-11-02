/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:35:48 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/01 11:58:07 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
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
char transform(unsigned int index, char c) {
    return c + 1; 
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i=0;
    if(!s)
    {
        return NULL;
    }
    int len=ft_strlen(s);
    char *new_s=(char *)malloc(len+1);
    while (s[i])
    {
        new_s[i]=f(i,s[i]);
        i++;
    }
    new_s[i]='\0';
    return new_s;  
}
int main() {
    char *original = "hello"; // Original string
    char *result = ft_strmapi(original, transform); // Apply transformation

    if (result) {
        printf("Original: %s\n", original); // Print original string
        printf("Transformed: %s\n", result); // Print transformed string
        free(result); // Free allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}