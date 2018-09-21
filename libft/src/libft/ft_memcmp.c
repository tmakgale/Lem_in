/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:55:11 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:55:15 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t x;

	x = -1;
	while (++x < n)
		if (((t_byte *)s1)[x] != ((t_byte *)s2)[x])
			return (((t_byte *)s1)[x] - ((t_byte *)s2)[x]);
	return (0);
}
