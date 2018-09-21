/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:35:50 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:35:54 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	ft_conv_percent(char in, t_output *out, t_arg *flags, va_list *ap)
{
	char	*str;

	(void)ap;
	str = ft_strnew(1);
	str[0] = in;
	handle_padding(&str, flags, '%');
	out->str = ft_strnjoinf(out->str, out->len, str, ft_strlen(str));
	out->len += ft_strlen(str);
	free(str);
}
