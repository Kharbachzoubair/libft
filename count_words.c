/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:07:49 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/31 12:53:19 by zkharbac         ###   ########.fr       */
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

// Function to duplicate a string
char *ft_strdup(const char *s1) {
    int i = 0;
    char *copy = malloc(ft_strlen(s1) + 1);
    if (!copy) {
        return NULL;
    }
    while (s1[i]) {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    return copy;
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

// Function to fill a word from the original string
char *fill_word(const char *str, int start, int end) {
    int len = end - start;
    char *s = malloc(len + 1);
    if (!s) {
        return NULL;
    }
    int i = 0;
    while (i < len) {
        s[i] = str[start + i];
        i++;
    }
    s[len] = '\0'; // Null-terminate the string
    return s;
}

// Function to free an array of strings
void free_words(char **words) {
    int i = 0;
    while (words[i]) {
        free(words[i]);
        i++;
    }
    free(words);
}

// Main split function
char **split(const char *s, char c) {
    if (!s) return NULL; // Handle null string input

    int total_words = word_count(s, c);
    char **res = malloc((total_words + 1) * sizeof(char *));
    if (!res) {
        return NULL;
    }

    int i = 0, j = 0, start = -1;
    while (s[i]) {
        if (s[i] == c) {
            if (start != -1) {
                res[j++] = fill_word(s, start, i); // Fill the word
                start = -1; // Reset start for the next word
            }
        } else if (start == -1) {
            start = i; // Mark the start of a word
        }
        i++;
    }
    // Handle the last word if it exists
    if (start != -1) {
        res[j++] = fill_word(s, start, i);
    }
    res[j] = NULL; // Null-terminate the array of words

    return res;
}

// Test the split function
int main() {
    char **words = split("hello world 1337", ' ');
    int i = 0;
    while (words[i]) {
        printf("Word %d: %s\n", i, words[i]);
        i++;
    }
    free_words(words); // Free the allocated memory
    return 0;
}
