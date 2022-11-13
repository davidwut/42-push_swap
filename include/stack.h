/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:25:26 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 10:28:27 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "../libft/include/libft.h"

typedef struct s_stack
{
	int	*stack;
	int	size;
	int	top;
}	t_stack;

/* stack_utils1.c */
t_stack	*stack_init(int size);
void	swap(t_stack *stack);
void	push(t_stack *from, t_stack *to);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
/* stack_utils2.c */
t_stack	*stack_fill(int size, char **args);
int		valid_args(int size, char **args);
void	stack_free(t_stack *stack);
int		max(t_stack *stack);
int		min(t_stack *stack);

#endif
