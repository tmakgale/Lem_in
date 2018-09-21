/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoinf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:11:59 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:12:03 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strnjoinf(char *s1, int len1, char const *s2, int len2)
{
	char *ret;

	if (!s1 || !s2)
		return (NULL);
	ret = ft_strnew(len1 + len2);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, len1);
	ft_memcpy(ret + len1, s2, len2);
	free(s1);
	return (ret);
}
