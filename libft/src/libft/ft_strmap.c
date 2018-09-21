/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:09:12 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:09:16 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		x;

	if (!s || !f)
		return (NULL);
	ret = ft_strnew(ft_strlen(s));
	if (!ret)
		return (NULL);
	x = -1;
	while (s[++x])
		ret[x] = f(s[x]);
	return (ret);
}
