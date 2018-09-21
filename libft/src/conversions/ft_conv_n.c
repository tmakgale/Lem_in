/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:35:11 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:35:16 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	ft_conv_n(char in, t_output *out, t_arg *flags, va_list *ap)
{
	int	*storage;

	(void)in;
	(void)flags;
	storage = va_arg(*ap, int *);
	*storage = out->len;
}
