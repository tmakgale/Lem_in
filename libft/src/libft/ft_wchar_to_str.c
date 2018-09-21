/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_to_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:15:58 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:16:02 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	ft_wchar_to_str(wchar_t in, char *str)
{
	if (in <= 0x7F)
		str[0] = in;
	else if (in <= 0x7FF)
	{
		str[0] = 192 | (((unsigned int)(in) >> 6) & 63);
		str[1] = 128 | ((unsigned int)(in) & 63);
	}
	else if (in <= 0xFFFF)
	{
		str[0] = 224 | (((unsigned int)(in) >> 12) & 63);
		str[1] = 128 | (((unsigned int)(in) >> 6) & 63);
		str[2] = 128 | ((unsigned int)(in) & 63);
	}
	else if (in <= 0x10FFFF)
	{
		str[0] = 240 | (((unsigned int)(in) >> 18) & 63);
		str[1] = 128 | (((unsigned int)(in) >> 12) & 63);
		str[2] = 128 | (((unsigned int)(in) >> 6) & 63);
		str[3] = 128 | ((unsigned int)(in) & 63);
	}
}
