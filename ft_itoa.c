/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:01 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/01 11:18:35 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int int_len(int n)
{
    int count=0;
    if(n==0)
    {
        return 1;
    }
    if(n==-2147483648)
    {
        return 11;
    }
    if(n<0)
    {
        count=1;
        n*=-1;
    }
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}
char *ft_itoa(int n)
{
    int intg=1;
    int count=int_len(n);
    char *ma=(char *)malloc ((count+1) * sizeof(char));
    if(n==0)
    {
        ma[0]='0';
    }
    if(n<0)
    {
        ma[0]='-';
        intg=-1;
    }
    ma[count]='\0';
    while(n && count--)
    {
        ma[count]=(n % 10)*intg + 48;
        n /= 10;
    }
    return ma;
}

int main()
{
    char *str = ft_itoa(15);
    printf("%s", str);
}
