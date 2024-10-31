/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:37:48 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/31 16:57:33 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *strdup(const char *s1)
{
    int i=0;
    int size =ft_strlen(s1);
    char *copy = (char*)malloc(size + sizeof(char));
    if(copy == NULL)
    {
        return NULL;
    }
    while (s1[i])
    {
        copy[i]=s1[i];
        i++;
    }
    copy[i]= '\0';
    return copy;
    
}
int main ()
{
    char *str = "hello game!";
    int size =ft_strlen(str);
    printf("size of the first one %d",size);
    printf("here's the original %s",str);
  char *copy = strdup(str);
   printf("here's the copy %s",copy);
  


 }