/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:26:26 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 22:27:07 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
