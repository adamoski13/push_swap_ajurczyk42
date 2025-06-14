#include "../push_swap.h"

void    ra(int *arr, int size)
{
	int tmp;

	tmp = arr[0];
	ft_memmove(arr, arr + 1, sizeof(int) * (size - 1));
	arr[size - 1] = tmp;
    ft_putstr_fd("ra\n", 1);
}

void    rb(int *arr, int size)
{
	int tmp;

	tmp = arr[0];
	ft_memmove(arr, arr + 1, sizeof(int) * (size - 1));
	arr[size - 1] = tmp;
    ft_putstr_fd("rb\n", 1);
}

void    rr(int *arr1, int *arr2, int size)
{
	int tmpa;
	int tmpb;

	tmpa = arr1[0];
	ft_memmove(arr1, arr1 + 1, sizeof(int) * (size - 1));
	arr1[size - 1] = tmpa;
	tmpb = arr2[0];
	ft_memmove(arr2, arr2 + 1, sizeof(int) * (size - 1));
	arr2[size - 1] = tmpb;
    ft_putstr_fd("rr\n", 1);
}