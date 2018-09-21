/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:45:34 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:45:38 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_free_strsplit(char *s, char **buff, char split)
{
	int x;
	int len;

	len = ft_count_words(s, split);
	x = -1;
	while (++x < len)
		free(buff[x]);
	free(buff);
}
