/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:12:34 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:12:38 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	index2;

	if (!*little)
		return ((char *)big);
	index2 = 0;
	while (big[index2])
	{
		index = 0;
		while (big[index2 + index] == little[index] && index2 + index < len)
			if (!little[++index])
				return ((char *)(big + index2));
		index2++;
	}
	return (0);
}
