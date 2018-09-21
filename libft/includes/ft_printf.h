/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:33:25 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:22:31 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <libft.h>

typedef unsigned int	t_u32;

enum
{
	none,
	hh,
	h,
	l,
	ll,
	L,
	q,
	j,
	z,
	t,
	p
}					length;

typedef struct		s_arg
{
	int				alternative : 1;
	int				left_justify : 1;
	int				force : 1;
	int				blank : 1;
	int				pad_zeroes : 1;
	int				grouping : 1;
	int				got_width : 1;
	int				got_precis : 1;
	int				asterisk : 1;
	unsigned int	width;
	unsigned int	precision;
	char			length;
}					t_arg;

typedef struct		s_output
{
	char	*str;
	int		len;
}					t_output;

typedef struct		s_conv
{
	char			*conv;
	void			(*ft)(char, t_output *, t_arg *, va_list *);
}					t_conv;

void				ft_conv_unimp(char in, t_output *out, t_arg *flags,
						va_list *ap);
void				ft_conv_s(char in, t_output *out, t_arg *flags,
						va_list *ap);
void				ft_conv_nums(char in, t_output *out, t_arg *flags,
						va_list *ap);
t_arg				*ft_printf_find_flags(char *in, int len, va_list *ap);

void				handle_padding(char **str, t_arg *flags, char type);
void				handle_precision(char **str, t_arg *flags, char type);
void				ft_conv_c(char in, t_output *out, t_arg *flag, va_list *ap);
char				*ft_num_to_base(uintmax_t value, t_u32 base, char unsign,
						char type);
void				ft_conv_percent(char in, t_output *out, t_arg *flags,
						va_list *ap);
void				ft_conv_n(char in, t_output *out, t_arg *flag, va_list *ap);
void				wcharp_to_str(wchar_t in, char *str);
int					ft_printf_find_base(char in);
int					ft_printf_find_sign(char in);

#endif
