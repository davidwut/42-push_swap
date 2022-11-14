/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:16:15 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 21:54:28 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_fill(int size, char **args)
{
	t_stack	*stack;
	int		i;
	int		j;

	if (!valid_args(size, args))
		return (NULL);
	stack = stack_init(size);
	if (!stack)
		return (NULL);
	i = size;
	while (--i >= 0)
	{
		stack->stack[i] = ft_atoi(args[size - 1 - i]);
		j = size;
		while (--j > i)
		{
			if (stack->stack[j] == stack->stack[i])
			{
				stack_free(stack);
				return (NULL);
			}
		}
	}
	stack->top = size - 1;
	return (stack);
}

int	valid_args(int size, char **args)
{
	int	i;
	int	j;

	if (size <= 0)
		return (0);
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (args[i][++j])
		{
			if (j == 0 && (args[i][j] == '-'))
				continue ;
			else if (!ft_isdigit(args[i][j]))
				return (0);
		}
	}
	return (1);
}

void	stack_free(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->stack)
		free(stack->stack);
	free(stack);
}

int	max(t_stack *stack)
{
	(void) stack;
	return (0);
}

int	min(t_stack *stack)
{
	(void) stack;
	return (0);
}
