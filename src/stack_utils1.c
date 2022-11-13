/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:26:32 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 21:43:12 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_init(int size)
{
	t_stack	*stack;

	stack = malloc(sizeof(*stack));
	if (!stack)
		return (NULL);
	stack->stack = malloc(size * sizeof(*stack->stack));
	if (!stack->stack)
	{
		free(stack);
		return (NULL);
	}
	stack->size = size;
	stack->top = -1;
	return (stack);
}

void	swap(t_stack *stack)
{
	int	temp;

	if (stack->top < 1)
		return ;
	temp = stack->stack[stack->top];
	stack->stack[stack->top] = stack->stack[stack->top - 1];
	stack->stack[stack->top - 1] = temp;
}

void	push(t_stack *from, t_stack *to)
{
	if (from->top < 0)
		return ;
	to->top++;
	to->stack[to->top] = from->stack[from->top];
	from->top--;
}

void	rotate(t_stack *stack)
{
	int	temp;
	int	i;

	temp = stack->stack[stack->top];
	i = stack->top + 1;
	while (--i)
		stack->stack[i] = stack->stack[i - 1];
	stack->stack[0] = temp;
}

void	reverse_rotate(t_stack *stack)
{
	int	temp;
	int	i;

	temp = stack->stack[0];
	i = -1;
	while (++i < stack->top)
		stack->stack[i] = stack->stack[i + 1];
	stack->stack[stack->top] = temp;
}
