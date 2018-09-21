/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:33:48 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:22:40 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>
# include <stdint.h>
# define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
# define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
# define ABS(X) ((X > 0) ? X : -X)
# define BUFF_SIZE 5000
# define SIZET_MAX (~(size_t)0)

typedef unsigned char	t_byte;
typedef struct		s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}					t_list;

/*
** what it is
*/

int					ft_isupper(int c);
int					ft_isspace(int c);
int					ft_islower(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

/*
** Memory
*/

void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t num);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);

/*
** Putin
*/

void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int nb);
void				ft_putnbr_fd(int nb, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_print_memory(const void *addr, size_t size);

/*
** Str
*/

char				*ft_strcat(char *dest, const char *src);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *dest, const char *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t size);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *big,
						const char *little, size_t len);
char				*ft_strrchr(const char *s, int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				*ft_strrev(char *str);
void				*ft_realloc(void *src, size_t srcsize, size_t newsize);
char				*ft_strcjoin(char *delim, char **arr, size_t size);
char				*ft_strnjoin(char const *s1,
						int len1, char const *s2, int l2);
char				*ft_strnjoinf(char *s1, int len1, char const *s2, int l2);
void				ft_printjoin(char *delim, char **arr, size_t size);
int					ft_count_words(const char *str, char c);
void				ft_free_strsplit(char *s, char **buff, char split);

/*
** Conversions
*/

int					ft_atoi(const char *nptr);
char				*ft_itoa(int n);
char				*ft_itoa_base(int value, int base);

/*
** List
*/

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list*elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstdelcont(t_list **alst, void *cont);
void				ft_lst_add_back(t_list **alst, t_list *new);
void				ft_lstdelall(t_list *lst);

/*
** Other
*/

int					ft_get_next_line(const int fd, char **line);
char				*ft_strcatf(char *dest, const char *src);
char				*ft_strjoinf(char const *s1, char *s2);
wchar_t				*ft_wchardup(wchar_t *in);
char				*ft_wcharp_to_str(wchar_t *in);
size_t				ft_wcharp_len(wchar_t *in);
int					ft_wchar_len(wchar_t chr);
void				ft_wchar_to_str(wchar_t in, char *str);
int					ft_printf(char *in, ...);
int					ft_asprintf(char **out, char *in, ...);
int					ft_dprintf(int fd, char *in, ...);

typedef struct		s_file_buff
{
	int				fd;
	char			*start;
	char			*str;
}					t_file_buff;
#endif
