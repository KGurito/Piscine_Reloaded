/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusoares <gusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:48:35 by gusoares          #+#    #+#             */
/*   Updated: 2025/07/12 17:01:18 by gusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	cache;

	cache = *a;
	*a = *b;
	*b = cache;
}

// int	main(void)
// {
// 	int	nbr_a = 20;
// 	int	nbr_b = 80;
// 	int *a = &nbr_a;
// 	int *b = &nbr_b;

// 	printf("Antes do rolê\n");
// 	printf("%d\n", nbr_a);
// 	printf("%d\n", nbr_b);

// 	ft_swap(a, b);

// 	printf("Depois do rolê\n");
// 	printf("%d\n", nbr_a);
// 	printf("%d\n", nbr_b);
// }
