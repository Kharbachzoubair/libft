/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:21:22 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/02 11:42:31 by zkharbac         ###   ########.fr       */
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

#include <stdlib.h>

// Function to get a substring of a given length starting from a specific index
char *ft_substr(const char *s, unsigned int start, size_t len)
{
    if (!s) return NULL;  // Handle null input string

    size_t len_S = ft_strlen(s);  // Get the length of the input string `s`

    // If `start` is beyond the end of `s`, return an empty string
    if (start >= len_S) {
        return (char *)malloc(1); // Allocate space for empty string
    }

    // Adjust `len` if `start + len` exceeds the length of `s`
    if (start + len > len_S) {
        len = len_S - start;
    }

    // Allocate memory for the substring, including space for null terminator
    char *str = (char *)malloc(len + 1);
    if (!str) {
        return NULL;  // Return NULL if memory allocation fails
    }

    // Copy characters from `s` to `str`, starting at `start` and for `len` characters
    for (size_t i = 0; i < len; i++) {
        str[i] = s[start + i];
    }

    // Null-terminate the substring
    str[len] = '\0';

    return str;  // Return the created substring
}


#include <stdio.h>
int main()
{
    char str[] = "hello, world!";
    printf("%s\n", ft_substr(str, 6,6)); // Expected output: "llo, "
    return 0;
}
