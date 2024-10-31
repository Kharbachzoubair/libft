/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:01:36 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/26 12:50:19 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 

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
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i= 0;
    size_t sr =ft_strlen(src );
    if (size ==0)
    {
        return sr;
    }
    while (src[i] && i < size - 1 )
    {
        dst[i]=src[i];
        i++;
    }
    dst[i]='\0';
    return sr;
}
int main()
{
    char src []="hello";
    char dest[]="ssd";
    int a = ft_strlcpy(dest, src,3) ;
    printf("%d \n",a);
    printf("%s",dest);
}
