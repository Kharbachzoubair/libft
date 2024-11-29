/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:00:32 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/29 10:44:31 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	int		i;
	size_t	count;
	int		word;

	i = 0;
	count = 0;
	while (s[i])
	{
		word = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			if (word == 0)
				count++;
			word = 1;
			i++;
		}
	}
	return (count);
}

static char	**free_s(char **split, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static char	**fill_words(char **split, char const *s, char c, size_t word_count)
{
	size_t	i;
	size_t	j;
	size_t	word_start;

	i = 0;
	j = 0;
	while (s[i] && j < word_count)
	{
		word_start = 0;
		while (s[i] == c && s[i])
			i++;
		word_start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > word_start)
		{
			split[j] = ft_substr(s, word_start, i - word_start);
			if (split[j] == NULL)
				return (free_s(split, j));
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	size_t		word_count;

	if (!s)
		return (NULL);
	word_count = count_word(s, c);
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	return (fill_words(split, s, c, word_count));
}

