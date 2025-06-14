#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_list
{
	int		*a;
	int		*b;
	int		a_size;
	int		b_size;
	char	*join_args;
}	t_list;

// utils functions
void	parse_numbers(t_list *s);
void	initialize_list(int argc, char **argv, t_list *s);
void	create_index(t_list *s);
int		ft_atol(const char *n, t_list *s);
int		ft_count_words(const char *src, char c);

// check functions
void	exit_if_sorted_or_has_duplicate(t_list *s, int i);
void	free_and_exit_with_message(t_list *s, char *msg);
void	validate_arguments(int argc, char **argv);

// move functions
void    pa(t_list *s);
void    pb(t_list *s);
void    sa(int *arr);
void    sb(int *arr);
void    ss(int *arr1, int *arr2);
void    ra(int *arr, int size);
void    rb(int *arr, int size);
void    rr(int *arr1, int *arr2, int size);
void    rra(int *arr, int size);
void    rrb(int *arr, int size);

// sort functions
void	sort_three_elements(t_list *s);
void	sort_four_to_five_elements(t_list *s);
void	radix_sort(t_list *s);
int		is_array_sorted(t_list *s);

#endif