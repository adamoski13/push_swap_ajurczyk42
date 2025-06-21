#include "push_swap.h"

int	is_a_sorted(t_list *s)
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

void	exit_if_sorted_or_has_duplicate(t_list *s, int i)
{
	int	j;

	j = 0;
	if (i == 0)
	{
		while (i < s->a_size)
		{
			j = i + 1;
			while (j < s->a_size)
			{
				if (s->a[i] == s->a[j])
					free_and_exit_with_message(s, "Error\n");
				j++;
			}
			i++;
		}
	}
	if (is_a_sorted(s))
		free_and_exit_with_message(s, NULL);
}

void	arg_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc < 2)
		free_and_exit_with_message(NULL, "");
	while (++i < argc)
	{
		j = 0;
		if (!argv[i][0] || (argv[i][0] && argv[i][0] == ' '))
			free_and_exit_with_message(NULL, "Error\n");
		while (argv[i][j] != '\0')
		{
			if ((!(ft_isdigit(argv[i][j])) && (argv[i][j] != ' ') 
			&& (argv[i][j] != '-' && argv[i][j] != '+' && argv[i][j] != ' ')) 
			|| (argv[i][j] == '-' && argv[i][j + 1] == '\0') 
			|| (argv[i][j] == '+' && argv[i][j + 1] == '\0') 
			|| (argv[i][j] == '-' && argv[i][j + 1] == ' ') 
			|| (argv[i][j] == '+' && argv[i][j + 1] == ' ')) 
				free_and_exit_with_message(NULL, "Error\n");
			j++;
		}
	}
}

void	free_and_exit_with_message(t_list *s, char *msg)
{
	if (msg)
		ft_putstr_fd(msg, STDERR_FILENO);
	if (s != NULL)
	{
		if (s->a != NULL)
			free(s->a);
		if (s->b != NULL)
			free(s->b);
		if (s->join_args != NULL)
			free(s->join_args);
		if (s != NULL)
			free(s);
	}
	exit(1);
}
