/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharp_to_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:17:22 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:17:26 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_wcharp_to_str(wchar_t *in)
{
	size_t	len;
	char	*ret;
	int		pos;

	len = ft_wcharp_len(in);
	ret = ft_strnew(len);
	pos = 0;
	while (*in)
	{
		ft_wchar_to_str(*in, ret + pos);
		pos += ft_wchar_len(*in);
		in++;
	}
	return (ret);
}
