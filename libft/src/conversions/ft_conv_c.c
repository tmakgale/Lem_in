/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:34:48 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:34:55 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	ft_conv_wc(char **str, va_list *ap)
{
	wchar_t in;
	int		len;

	in = va_arg(*ap, wchar_t);
	len = ft_wchar_len(in);
	*str = ft_strnew(len);
	ft_wchar_to_str(in, *str);
	return (in == 0);
}

static void	handle_null(char *str, t_output *out, char null)
{
	size_t	len;
	size_t	pos;

	len = ft_strlen(str);
	pos = 0;
	while (pos < len)
	{
		if (str[pos] == null)
			str[pos] = 0;
		pos++;
	}
	out->str = ft_strnjoinf(out->str, out->len, str, len);
	out->len += len;
	free(str);
}

void		ft_conv_c(char in, t_output *out, t_arg *flags, va_list *ap)
{
	int		c;
	char	*str;
	char	null;

	null = 0;
	if ((in == 'C' || flags->length == l) && (null = ft_conv_wc(&str, ap)))
		str[0] = null;
	else if (!(in == 'C' || flags->length == l))
	{
		c = va_arg(*ap, int);
		str = ft_strnew(1);
		null = (c == 0) ? 1 : 0;
		str[0] = c + null;
	}
	handle_padding(&str, flags, 's');
	if (null)
		handle_null(str, out, null);
	else
	{
		out->str = ft_strnjoinf(out->str, out->len, str, ft_strlen(str));
		out->len += ft_strlen(str);
		free(str);
	}
}
