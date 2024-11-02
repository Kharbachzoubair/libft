/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:34:25 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/02 13:06:24 by zkharbac         ###   ########.fr       */
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
char *strdup(const char *s1);
char *ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char *strdup(const char *s1);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(const char *s1, const char *s2);
size_t strlcat(char *dst, const char *src, size_t Size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strtrim(const char *s1, const char *set);
char *ft_substr(const char *s, unsigned int start, size_t len);
int ft_toupper(int c);
int ft_tolower(int c);
void	bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

 










#endif