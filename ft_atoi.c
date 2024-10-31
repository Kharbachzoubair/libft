/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:55:03 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/31 13:47:03 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int main() {
    // Test cases
    char *test_cases[] = {
        "   42",              // Leading whitespace
        "---42",              // Multiple negative signs
        "+-42",               // Positive followed by negative
        "42abc",              // Non-numeric characters after number
        "42.5",               // Decimal number
        "2147483648",         // Overflow
        "-2147483649",        // Underflow
        "",                   // Empty string
        "     ",              // Only whitespace
        "+123",               // Valid positive number
        "-123",               // Valid negative number
        "0",                  // Zero
        "-0",                 // Negative zero
        "12345678901"         // Long number
    };

    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        printf("Input: '%s' => Output: %d\n", test_cases[i], ft_atoi(test_cases[i]));
    }

    return 0;
}
*/