/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:29:16 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:29:21 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

int		find_length(t_lemin *lemin, int *test_path, int pc)
{
	int x;
	int len;

	x = -1;
	len = 0;
	while (++x < pc)
		len += lemin->patharr[test_path[x]]->length;
	return (len);
}

void	copy_arr(int *dest, int *src, int len)
{
	while (len--)
		dest[len] = src[len];
}
