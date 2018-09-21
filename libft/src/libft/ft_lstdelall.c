/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:51:34 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:51:38 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdelall(t_list *lst)
{
	if (!lst)
		return ;
	if (lst->next)
		ft_lstdelall(lst->next);
	free(lst->content);
	free(lst);
}
