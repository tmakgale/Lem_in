/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:13:51 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:13:55 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *big, const char *little)
{
	size_t	index;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		index = 0;
		while (big[index] == little[index])
			if (!little[++index])
				return ((char *)big);
		big++;
	}
	return (0);
}
