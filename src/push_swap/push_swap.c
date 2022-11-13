/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:26:52 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 10:50:22 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = stack_fill(argc - 1, argv + 1);
	if (!stack)
		error();
	ft_printf("Size: %d\nTop: %d\nTop elem: %d\n", stack->size, stack->top, stack->stack[stack->top]);
	stack_free(stack);
	return (1);
}
