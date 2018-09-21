/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcatf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:02:23 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:02:27 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "stdlib.h"

char	*ft_strcatf(char *dest, const char *src)
{
	char *ret;

	ret = dest;
	while (*dest)
		dest++;
	while (*src)
		*(dest++) = *(src++);
	*dest = 0;
	free((void *)src);
	return (ret);
}
