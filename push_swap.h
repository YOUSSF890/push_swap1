/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagzoul <ylagzoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 23:25:27 by ylagzoul          #+#    #+#             */
/*   Updated: 2025/02/15 15:04:13 by ylagzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct node
{
	int			data;
	int			index;
	struct node	*next;
}				t_list;

void	push_b(t_list **stack_a, t_list	**stack_b);
void	push_a(t_list **stack_b, t_list	**stack_a);
void	reverse_rotate_a(t_list **rra);
void	reverse_rotate_b(t_list **rrb);
void	rotate_a(t_list **ra);
void	rotate_b(t_list **rb);
void	swap_a(t_list **sa);
void	swap_b(t_list **sb);

int		is_list_sorted(t_list *stati);
long	ft_atoi(const char *str);
char	**ft_split(char const *str, char c);
char	*ft_strdup(const char *s1);

int		stack_size(t_list *stack, int k);
void	push_to_stack_b(t_list **sta, t_list **stb, int size, int rang);
int		find_max_index(t_list **stack, int i);
void	push_to_stack_a(t_list **stacka, t_list **stackb, int a);
void	sort_large_stack(t_list **stack_a, t_list **stack_b);

int		find_index_of_value(t_list *a, int b);
int		find_min_value(t_list *t);
void	sort_three_numbers(t_list **stack_a);
void	sort_four_numbers(t_list **stack_a, t_list **stack_b);
void	sort_five_numbers(t_list **stack_a, t_list **stack_b);

t_list	*create_new_node(int number);
void	append_node_to_list(t_list **lst, t_list *new);
void	assign_index_to_nodes(t_list *stack);

int		count_input_words(char **str);
void	validate_input(char	**str);
void	check_duplicate_numbers(t_list **stack_a);
void	convert_to_stack(char	**str, t_list	**a);
void	check(char **str, int i, int j);

void	free_string_array(char **str);
void	print_error(char **str);
void	free_stack(t_list	**list);

char	**allocate_result_array(int word_count);
char	**split_and_store(char *input, char **t, int *a);
char	**split_input(char **str);

#endif