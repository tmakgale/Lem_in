/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:08:22 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:08:25 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_size;
	unsigned int	dest_size;

	i = 0;
	src_size = 0;
	while (dst[i])
		i++;
	while (src[src_size])
		src_size++;
	dest_size = i;
	while (*src && i + 1 < size)
		dst[i++] = *(src++);
	dst[i] = 0;
	return (src_size + ((dest_size > size) ? size : dest_size));
}
