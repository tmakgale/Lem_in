/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:14:11 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:14:15 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ret;

	if (!s || start + len > ft_strlen(s))
		return (NULL);
	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	return (ft_strncpy(ret, s + start, len));
}
