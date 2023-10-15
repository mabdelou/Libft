/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:08:04 by mabdelou          #+#    #+#             */
/*   Updated: 2021/11/13 14:16:22 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);
void	*ft_bzero(void *st, size_t len);
void	*ft_memset(void *st, int a, size_t len);
int		ft_isalnum(int a);
int		ft_isalpha(int a);
int		ft_isascii(int a);
int		ft_isdigit(int a);
int		ft_isprint(int a);
void	*ft_memchr(const void *s, int a, size_t b);
int		ft_memcmp(const void *st1, const void *st2, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *st, int a, size_t len);
char	*ft_strchr(char *a, int b);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *a);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *tofind, size_t len);
char	*ft_strrchr(char *a, int b);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char	const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
int		ft_tolower(int a);
int		ft_toupper(int a);
void	*ft_calloc(size_t size, size_t num);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
