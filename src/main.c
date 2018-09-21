/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:29:36 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:29:40 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

static void	free_all(t_lemin *lemin)
{
	t_list *tmp;

	tmp = lemin->rooms;
	while (tmp)
	{
		free((*(t_room **)tmp->content)->name);
		ft_lstdelall((*(t_room **)tmp->content)->links);
		tmp = tmp->next;
	}
	tmp = lemin->paths;
	while (tmp)
	{
		free((*(t_path **)tmp->content)->links);
		tmp = tmp->next;
	}
	ft_lstdelall(lemin->rooms);
	ft_lstdelall(lemin->paths);
	free(lemin);
}

void		parse_args(int ac, char **av, t_lemin *lemin)
{
	int x;

	x = 0;
	while (++x < ac)
	{
		if (ft_strequ(av[x], "-p"))
			lemin->bonus.paths = 1;
		if (ft_strequ(av[x], "-a"))
			lemin->bonus.ants = 1;
		if (ft_strequ(av[x], "-n"))
			lemin->bonus.steps = 1;
		if (ft_strequ(av[x], "-t"))
			lemin->bonus.time = 1;
		if (ft_strequ(av[x], "-s"))
			lemin->bonus.allpaths = 1;
		if (ft_strequ(av[x], "-c"))
			lemin->bonus.color = 1;
	}
}

int			main(int ac, char **av)
{
	t_lemin *lemin;

	lemin = (t_lemin *)ft_memalloc(sizeof(t_lemin));
	lemin->begin = clock();
	parse_args(ac, av, lemin);
	parse(lemin);
	validate(lemin);
	solve(lemin);
	print_bonus(lemin);
	free_all(lemin);
	return (0);
}
