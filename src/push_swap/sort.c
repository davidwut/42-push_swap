/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:35:09 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 21:58:03 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// for 3 numbers, <= 3  instructions
// for 5 numbers, <= 12 instructions
// for 100 numbers, instruciton limits: 1500,  1300,  1100, 900,  700
// for 500 numbers, instruction limits: 11500, 10000, 8500, 7000, 5500

void	sort(t_stack *a)
{
	t_stack	*b;

	b = stack_init(a->size);
	if (!b)
	{
		stack_free(a);
		error();
	}
	if (a->size <= 3)
		sort_small(a, b);
	stack_free(b);
}

void	sort_small(t_stack *a, t_stack *b)
{
	int	*s;

	(void) b;
	print_stack_elems(a);
	if (is_sorted(a))
		return ;
	s = a->stack;
	if ((s[2] > s[1] && s[2] < s[0] && s[1] < s[0])
		|| (s[2] > s[1] && s[2] > s[0] && s[1] > s[0])
		|| (s[2] < s[1] && s[2] < s[0] && s[1] > s[0]))
		exec(SA, a, b);
	else if (s[2] > s[1] && s[2] > s[0] && s[1] < s[0])
		exec(RA, a, b);
	else
		exec(RRA, a, b);
	sort_small(a, b);
}
