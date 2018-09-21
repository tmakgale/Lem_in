/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelcont.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:51:56 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:52:01 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	ft_lstdelcont(t_list **alst, void *cont)
{
	t_list	*prev;
	t_list	*current;

	if (!alst || !*alst)
		return ;
	prev = *alst;
	if (prev->content == cont)
	{
		*alst = prev->next;
		return ;
	}
	current = prev->next;
	while (current)
	{
		if (current->content == cont)
		{
			prev->next = current->next;
			free(current);
			free(cont);
			return ;
		}
		prev = current;
		current = current->next;
	}
}
