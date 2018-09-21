/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:01:29 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:01:33 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

/*
** Makes sure src is valid
** if newsize < srcsize, src is truncated
*/

void	*ft_realloc(void *src, size_t srcsize, size_t newsize)
{
	void *ret;

	if (!src)
		return (NULL);
	ret = ft_memalloc(newsize);
	ft_memcpy(ret, src, MIN(srcsize, newsize));
	free(src);
	return (ret);
}
