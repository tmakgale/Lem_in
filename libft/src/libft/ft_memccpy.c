/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:54:30 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:54:33 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *strsrc;
	char *strdst;

	strsrc = (char *)src;
	strdst = (char *)dst;
	while (n--)
	{
		*strdst = *strsrc;
		strdst++;
		if (*strsrc == (char)c)
			return ((void *)strdst);
		strsrc++;
	}
	return (NULL);
}
