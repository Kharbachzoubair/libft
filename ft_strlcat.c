/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:43:08 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/26 11:59:33 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
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
size_t strlcat(char *dst, const char *src, size_t Size){
    size_t i = ft_strlen(dst);
    size_t j = ft_strlen(src);
    size_t len = i + ft_strlen(src);
    if(Size ==0 || Size <= j)
    {
        return Size + i;
    }
    Size = Size -i - 1;
    j=0;
    while(src[j] && Size > j)
    {
        dst[i++]=src[j++];
    }
    dst[i] = '\0';
    return len;
}
int main()
{
    char dest []="ghh";
    char src []= "hdfh";
    int a = strlcat(dest, src, 8);
    printf("%d \n",a);
    printf("%s",dest);
}