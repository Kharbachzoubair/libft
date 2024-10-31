/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:15:50 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/30 16:16:23 by zkharbac         ###   ########.fr       */
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
char *ft_strchr(const char *str, int c)
{
    int i;
    i = 0;
    if (str[i]== '\0')
    {
        return NULL ;
    }
    while (str[i])
    {
        if(str[i]==c)
        {
            return (char *)&str[i];
        }
        i++;
    }
    if (c == '\0') {
        return (char *)&str[i];  
    }

    return NULL; 
}
char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i = 0;
    size_t len_S = ft_strlen(s);  // Get the length of the input string `s`
    char *str;

    // If `start` is beyond the end of `s`, set `len` to 0
    if (start >= len_S) {
        len = 0;
    }

    // Adjust `len` if `start + len` exceeds the length of `s`
    if (start + len > len_S) {
        len = len_S - start;
    }

    // Allocate memory for the substring, including space for null terminator
    str = (char *)malloc(len + 1);
    if (!str) {
        return NULL;
    }

    // Copy characters from `s` to `str`, starting at `start` and for `len` characters
    while (i < len) {
        str[i] = s[start+i];
        i++;
    }

    // Null-terminate the substring
    str[i] = '\0';

    return str;
}
 char *ft_strtrim(const char *s1, const char *set) {
    if (!s1 || !set) return NULL;

    size_t start = 0;
    size_t end = ft_strlen(s1);

    while (s1[start] && ft_strchr(set, s1[start])) start++; // skip leading characters in `set`
    while (end > start && ft_strchr(set, s1[end - 1])) end--; // skip trailing characters in `set`

    return ft_substr(s1, start, end - start); // create trimmed substring
}

 int main ()
 {
    char str []="hello world 1337 in the house";
    char set []="hesoa";
    printf("%s", ft_strtrim(str, set));
 }