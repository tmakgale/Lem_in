/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:05:13 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:05:18 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2)
		if (*(s1++) != *(s2++))
			return ((*(t_byte *)(s1 - 1) - *(t_byte *)(s2 - 1)));
	return (0);
}
