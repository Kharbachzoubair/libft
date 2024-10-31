/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:34:25 by zkharbac          #+#    #+#             */
/*   Updated: 2024/10/23 10:00:34 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int ft_isascii(int c);
char *ft_strchr(const char *str, int c);
int ft_strlen(const char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strrchr(const char *str, int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isprint(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int	ft_atoi(char *str);







#endif