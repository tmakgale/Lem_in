/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:58:00 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:58:04 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

void	ft_putchar_fd(char c, int fd)
{
	unsigned char r;

	r = (unsigned char)c;
	write(fd, &r, 1);
}
