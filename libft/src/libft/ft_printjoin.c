/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:57:20 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:57:24 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_printjoin(char *delim, char **arr, size_t size)
{
	if (!arr || !*arr)
		return ;
	while (size--)
	{
		ft_putstr(*arr++);
		if (size >= 1)
			ft_putstr(delim);
	}
}
