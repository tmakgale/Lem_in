/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_helpers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:38:53 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:38:57 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		ft_printf_find_base(char in)
{
	if (in == 'o' || in == 'O')
		return (8);
	else if (in == 'x' || in == 'X' || in == 'p')
		return (16);
	else if (in == 'b')
		return (2);
	else
		return (10);
}

int		ft_printf_find_sign(char in)
{
	if (in == 'd' || in == 'i')
		return (0);
	return (1);
}
