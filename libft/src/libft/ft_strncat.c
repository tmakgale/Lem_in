/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:09:59 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:10:04 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*ret;
	size_t	x;

	x = -1;
	ret = dest;
	while (*dest)
		dest++;
	while (++x < n && *src)
		*(dest++) = *(src++);
	*dest = 0;
	return (ret);
}
