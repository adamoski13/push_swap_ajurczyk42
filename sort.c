
#include "push_swap.h"

void	sort_three_elements(t_list *s)
{
	if (s->a[2] != 2)
	{
		if (s->a[0] == 2)
			ra(s->a, s->a_size);
		else
			rra(s->a, s->a_size);
	}
	if (s->a[0] > s->a[1])
		sa(s->a);
}

void	sort_four_to_five_elements(t_list *s)
{
	while (s->b_size <= 1)
	{
		if (s->a[0] == 0 || s->a[0] == 1)
			pb(s);
		else
			ra(s->a, s->a_size);
	}
	if (s->b[0] == 0)
		sb(s->b);
	if (s->a[2] != 4)
	{
		if (s->a[0] == 4)
			ra(s->a, s->a_size);
		else
			rra(s->a, s->a_size);
	}
	if (s->a[0] > s->a[1])
		sa(s->a);
	pa(s);
	pa(s);
}

int	is_array_sorted(t_list *s)
{
	int	i;

	i = 0;
	while (i < s->a_size - 1)
	{
		if (s->a[i] > s->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	radix_sort_stack_b(t_list *s, int b_size, int bit_size, int j)
{
	while (b_size-- && j <= bit_size && !is_array_sorted(s))
	{
		if (((s->b[0] >> j) & 1) == 0)
			rb(s->b, s->b_size);
		else
			pa(s);
	}
	if (is_array_sorted(s))
		while (s->b_size != 0)
			pa(s);
}

void	radix_sort(t_list *s)
{
	int	j;
	int	bit_size;
	int	size;

	bit_size = 0;
	size = s->a_size;
	while (size > 1 && ++bit_size)
		size /= 2;
	j = -1;
	while (++j <= bit_size)
	{
		size = s->a_size;
		while (size-- && !is_array_sorted(s))
		{
			if (((s->a[0] >> j) & 1) == 0)
				pb(s);
			else
				ra(s->a, s->a_size);
		}
		radix_sort_stack_b(s, s->b_size, bit_size, j + 1);
	}
	while (s->b_size != 0)
		pa(s);
}
