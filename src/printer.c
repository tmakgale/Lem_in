/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmakgale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:30:33 by tmakgale          #+#    #+#             */
/*   Updated: 2017/11/26 13:30:37 by tmakgale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	print_ant(t_lemin *lemin, int ant, char *name)
{
	(void)lemin;
	if (lemin->bonus.color)
		ft_printf("\x1B[%dm", ant % 7 + 31);
	ft_printf("L%d-%s ", ant, name);
	if (lemin->bonus.color)
		ft_printf("%s", COL_RESET);
}

void	move_ant(t_lemin *lemin, int path)
{
	int		x;
	char	*name;

	x = -1;
	while (++x < lemin->num_ants)
	{
		if (lemin->ants[x].path == -1)
		{
			name = lemin->patharr[path]->links[0] ?
				lemin->patharr[path]->links[0]->name : lemin->end->name;
			print_ant(lemin, x + 1, name);
			lemin->remaining_ants--;
			lemin->ants[x].path = path;
			if (!lemin->patharr[path]->links[0])
				lemin->ants[x].room = -1;
			return ;
		}
	}
}

void	continue_ants(t_lemin *lemin)
{
	int		x;
	char	*next;

	x = -1;
	lemin->finished = 1;
	while (++x < lemin->num_ants)
	{
		if (lemin->ants[x].room != -1 && lemin->ants[x].path != -1)
		{
			next = (lemin->ants[x].room + 1 >=
				lemin->patharr[lemin->ants[x].path]->length) ? lemin->end->name
				: lemin->patharr[lemin->ants[x].path]->links[lemin->ants[x].room
				+ 1]->name;
			print_ant(lemin, x + 1, next);
			lemin->ants[x].room += 1;
			if (lemin->patharr[lemin->ants[x].path]->length <=
				lemin->ants[x].room)
				lemin->ants[x].room = -1;
		}
		if (lemin->ants[x].room != -1)
			lemin->finished = 0;
	}
}

void	do_turn(t_lemin *lemin)
{
	int x;
	int y;
	int total;

	x = -1;
	continue_ants(lemin);
	while (++x < lemin->pc)
	{
		y = -1;
		total = 0;
		while (++y < lemin->pc)
		{
			if (x == y)
				continue;
			if (lemin->patharr[lemin->best_paths[x]]->length >
				lemin->patharr[lemin->best_paths[y]]->length)
				total += lemin->patharr[lemin->best_paths[x]]->length /
					(lemin->patharr[lemin->best_paths[y]]->length + 1);
		}
		if (total < lemin->remaining_ants)
			move_ant(lemin, lemin->best_paths[x]);
	}
	ft_putchar('\n');
	lemin->steps++;
}

void	print_solution(t_lemin *lemin)
{
	if (lemin->pc == 0)
		ft_error("No solution");
	lemin->remaining_ants = lemin->num_ants;
	ft_putchar('\n');
	lemin->finished = 0;
	while (!lemin->finished)
		do_turn(lemin);
}
