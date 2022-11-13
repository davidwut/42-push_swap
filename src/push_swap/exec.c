/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:11:28 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 21:57:52 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exec(char *op, t_stack *a, t_stack *b)
{
	ft_printf("%s\n", op);
	if (!ft_strncmp(SA, op, 3))
		swap(a);
	else if (!ft_strncmp(SB, op, 3))
		swap(b);
	else if (!ft_strncmp(SS, op, 3))
	{
		swap(a);
		swap(b);
	}
	else if (!ft_strncmp(PA, op, 3))
		push(b, a);
	else if (!ft_strncmp(PB, op, 3))
		push(a, b);
	else if (!ft_strncmp(RA, op, 3))
		rotate(a);
	else if (!ft_strncmp(RB, op, 3))
		rotate(b);
	else if (!ft_strncmp(RR, op, 3))
	{
		rotate(a);
		rotate(b);
	}
	else
		exec2(op, a, b);
}

void	exec2(char *op, t_stack *a, t_stack *b)
{
	if (!ft_strncmp(RRA, op, 3))
		reverse_rotate(a);
	else if (!ft_strncmp(RRB, op, 3))
		reverse_rotate(b);
	else if (!ft_strncmp(RRR, op, 3))
	{
		reverse_rotate(a);
		reverse_rotate(b);
	}
}
