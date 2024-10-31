/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:56:06 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/28 13:35:01 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
char *ft_strjoin(const char *s1, const char *s2)
{
    if (!s1 && !s2)
    {
        return NULL;
    }
    if (!s1)
    {
        return strdup(s2);
    }
    if (!s2)
    {
        return strdup(s1);
    }
    int i=0;
    int j=0;
    int k=0;
    char *res;
    res = (char*)malloc((ft_strlen(s1)+ft_strlen(s2))+1);
    if(!res)
    {
        return NULL;
    }
    while(s1[i])
    {
        res[j++]=s1[i++];
    }
    while (s2[k])
    {
        res[j++]=s2[k++];
    }
    res[j] = '\0';
    return res;
    
    
}
int main() {
    // 1. Normal Cases
    char *joined1 = ft_strjoin("Hello, ", "World!");
    printf("Normal Case: %s\n", joined1); // Expected: Hello, World!
    free(joined1);

    // 2. Edge Cases
    char *joined2 = ft_strjoin(NULL, "World!");
    printf("Edge Case (s1 NULL): %s\n", joined2); // Expected: World!
    free(joined2);

    char *joined3 = ft_strjoin("Hello, ", NULL);
    printf("Edge Case (s2 NULL): %s\n", joined3); // Expected: Hello, 
    free(joined3);

    char *joined4 = ft_strjoin(NULL, NULL);
    printf("Edge Case (both NULL): %s\n", joined4); // Expected: (should be NULL)

    char *joined5 = ft_strjoin("", "World!");
    printf("Edge Case (s1 empty): %s\n", joined5); // Expected: World!
    free(joined5);

    char *joined6 = ft_strjoin("Hello, ", "");
    printf("Edge Case (s2 empty): %s\n", joined6); // Expected: Hello, 
    free(joined6);

    char *joined7 = ft_strjoin("", "");
    printf("Edge Case (both empty): %s\n", joined7); // Expected: (empty string)
    free(joined7);

    // 3. Performance Cases
    char *long_str1 = malloc(10001);
    memset(long_str1, 'A', 10000);
    long_str1[10000] = '\0';
    
    char *long_str2 = malloc(10001);
    memset(long_str2, 'B', 10000);
    long_str2[10000] = '\0';

    char *joined8 = ft_strjoin(long_str1, long_str2);
    printf("Performance Case: Length = %zu\n", ft_strlen(joined8)); // Expected: 20000
    free(joined8);
    free(long_str1);
    free(long_str2);

    // 4. Special Characters
    char *joined9 = ft_strjoin("Hello@#%", "World&*()");
    printf("Special Characters: %s\n", joined9); // Expected: Hello@#%World&*()
    free(joined9);

    char *joined10 = ft_strjoin("Hello ", " World!");
    printf("Whitespace Characters: %s\n", joined10); // Expected: Hello  World!
    free(joined10);

    // 5. Non-Printable Characters
    char *joined11 = ft_strjoin("\nHello\n", "\tWorld\t");
    printf("Non-Printable Characters: %s\n", joined11); // Expected: \nHello\n\tWorld\t
    free(joined11);

    // 6. Non-ASCII Characters
    char *joined12 = ft_strjoin("你好", "世界");
    printf("Non-ASCII Characters: %s\n", joined12); // Expected: 你好世界
    free(joined12);

    return 0;
}