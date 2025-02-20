/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagzoul <ylagzoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:47:39 by ylagzoul          #+#    #+#             */
/*   Updated: 2025/02/20 13:48:07 by ylagzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_print_KO(t_list *copy)
{
    write(1, "KO\n", 3);
	free_stack(&copy);
	exit(1);
}

void ft_print_KO2(t_list **stack_a, t_list **stack_b)
{
    write(1, "KO\n", 3);
	free_stack(stack_a);
	free_stack(stack_b);
	exit(1);
}

void ft_print_OK(t_list *copy)
{
    write(1, "OK\n", 3);
	free_stack(&copy);
	exit(1);
}