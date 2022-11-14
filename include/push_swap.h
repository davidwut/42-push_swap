/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:27:22 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 23:08:19 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stack.h"

/* sort.c */
void	sort(t_stack *a);
/* sort_small.c */
void	sort_small(t_stack *a, t_stack *b);
/* exec.c */
void	exec(char *op, t_stack *a, t_stack *b);
void	exec2(char *op, t_stack *a, t_stack *b);

#endif
