/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:26:52 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 21:52:17 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = stack_fill(argc - 1, argv + 1);
	if (!stack)
		error();
	sort(stack);
	stack_free(stack);
	return (0);
}
