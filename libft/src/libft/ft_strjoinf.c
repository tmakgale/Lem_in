/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:07:59 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:08:03 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strjoinf(char const *s1, char *s2)
{
	char *ret;

	if (!s1 || !s2)
		return (NULL);
	ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!ret)
		return (NULL);
	ft_strcpy(ret, s1);
	ret = ft_strcat(ret, s2);
	free(s2);
	return (ret);
}
