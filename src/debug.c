/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:54:27 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 21:52:27 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"

void	print_stack_info(t_stack *stack)
{
	int	i;

	i = stack->top;
	ft_printf("Elements: ");
	while (i >= 0)
	{
		ft_printf("%d ", stack->stack[i]);
		i--;
	}
	ft_printf("\nSize: %d\nTop elem [index]: %d [%d]\n",
		stack->size, stack->stack[stack->top], stack->top);
}

void	print_stack_elems(t_stack *stack)
{
	int	i;

	i = stack->top;
	while (i >= 0)
	{
		ft_printf("%d ", stack->stack[i]);
		i--;
	}
	ft_printf("\n");
}
