/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:07:49 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/02 11:40:54 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// Function to calculate the length of a string
int ft_strlen(const char *str) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}



// Function to count the number of words in a string
static int word_count(const char *str, char c) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (*str == c) {
            in_word = 0; // We're outside a word
        } else if (!in_word) {
            in_word = 1; // We've found the start of a new word
            count++;
        }
        str++;
    }
    return count;
}

// Function to create a substring from the original string
char *ft_substr(const char *s, unsigned int start, size_t len) {
    if (!s) return NULL;

    // Adjust length if it exceeds the remaining string length
    if (start >= ft_strlen(s)) return malloc(1); // Return an empty string

    size_t actual_len = ft_strlen(s + start);
    if (len > actual_len) len = actual_len;

    char *substr = malloc(len + 1);
    if (!substr) return NULL;

    for (size_t i = 0; i < len; i++) {
        substr[i] = s[start + i];
    }
    substr[len] = '\0'; // Null-terminate the substring
    return substr;
}

// Main split function
char **ft_split(const char *s, char c) {
    if (!s) return NULL; // Handle null string input

    int total_words = word_count(s, c);
    char **res = malloc((total_words + 1) * sizeof(char *));
    if (!res) {
        return NULL;
    }

    int i = 0, j = 0, start = -1; // Initialize variables
    while (s[i]) {
        if (s[i] != c && (i == 0 || s[i - 1] == c)) {
            start = i; // Mark the start of the word
        }
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0')) {
            res[j++] = ft_substr(s, start, i - start + 1); // Use ft_substr instead of fill_word
        }
        i++; // Always increment `i` to move through the string
    }
    res[j] = NULL; // Null-terminate the array of words

    return res;
}

// Test the split function
int main() {
    char **words = ft_split("hello world 1337", ' ');
    int i = 0;
    while (words[i]) {
        printf("Word %d: %s\n", i, words[i]);
        free(words[i]); // Free each word after printing
        i++;
    }
    free(words); // Free the array of words
    return 0;
}
