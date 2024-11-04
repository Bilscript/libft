/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamani <bhamani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:30:45 by bhamani           #+#    #+#             */
/*   Updated: 2024/10/30 19:30:45 by bhamani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

typedef struct	s_list
{
void			*content;
struct s_list	*next;
}				t_list;

int				ft_strcmp(char *s1, char *s2);
size_t			ft_strlen(const char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strchr(const char *str, int c);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(const char *s);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strncat(char *dest, char *src, unsigned int n);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strnstr(char *str, char *to_find, unsigned int n);
char			*ft_strrchr(char *str, int c);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			**ft_split(char const *s, char c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_atoi(char *str);
void			*ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t elementCount, size_t elementSize);
int				ft_isalpha(int c);
int				ft_isalpha(int c);
int				ft_isacii(int c);
int				ft_isdigit(int c);
int				ft_isacii(int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
size_t			ft_strlcpy(char *dest, char *src, size_t size);

#endif