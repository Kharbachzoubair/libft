/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:21:22 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/28 11:31:25 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>   // For size_t
#include <stdlib.h>   // For malloc

// Function to calculate the length of a string
int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}

// Function to get a substring of a given length starting from a specific index
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

#include <stdio.h>
int main()
{
    char str[] = "hello, world!";
    printf("%s\n", ft_substr(str, 6,5)); // Expected output: "llo, "
    return 0;
}
