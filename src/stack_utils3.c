/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:23:47 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 19:55:49 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	is_sorted(t_stack *stack)
{
	int	i;

	if (stack->size != stack->top + 1)
		return (0);
	i = -1;
	while (++i < stack->size - 1)
		if (stack->stack[i + 1] >= stack->stack[i])
			return (0);
	return (1);
}
