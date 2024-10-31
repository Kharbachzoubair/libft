/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:49:50 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/28 11:59:31 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char *strnstr(const char *haystack, const char *needle, size_t len) {
    // إذا كانت `needle` فارغة، نعيد `haystack`
    if (*needle == '\0') {
        return (char *)haystack;
    }

    size_t i = 0;
    while (haystack[i] && i < len) {
        // إذا وجدنا أول حرف في `needle` في `haystack`
        if (haystack[i] == needle[0]) {
            size_t j = 0;
            // تحقق من بقية الحروف في `needle` تطابق `haystack`
            while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len) {
                j++;
            }
            // إذا وصلنا إلى نهاية `needle`، وجدنا تطابقًا كاملًا
            if (needle[j] == '\0') {
                return (char *)&haystack[i];
            }
        }
        i++;
    }
    // إذا لم نجد `needle`، نعيد NULL
    return NULL;
}

int main() {
    const char *haystack = "hello, world!";
    const char *needle = "b ello ";
    size_t len = 12;

    char *result = strnstr(haystack, needle, len);
    if (result) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
}
