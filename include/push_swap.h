/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwuthric <dwuthric@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:27:22 by dwuthric          #+#    #+#             */
/*   Updated: 2022/11/13 19:40:44 by dwuthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"
# include "stack.h"
# include "error.h"
# include "debug.h"

/* sort.c */
void	sort(t_stack *a);
void	sort_small(t_stack *a, t_stack *b);

/* exec.c */
void	exec(char *op, t_stack *a, t_stack *b);
void	exec2(char *op, t_stack *a, t_stack *b);

#endif
