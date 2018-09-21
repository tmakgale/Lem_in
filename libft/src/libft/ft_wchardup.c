/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchardup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 14:16:17 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 14:16:20 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

wchar_t		*ft_wchardup(wchar_t *in)
{
	wchar_t *ret;
	size_t	count;
	size_t	i;

	count = 0;
	while (in[count])
		count++;
	ret = (wchar_t *)ft_memalloc(sizeof(wchar_t) * (count + 1));
	i = 0;
	while (i < count)
	{
		ret[i] = in[i];
		i++;
	}
	return (ret);
}
