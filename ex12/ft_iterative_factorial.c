/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo <gustavo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:48:06 by gustavo           #+#    #+#             */
/*   Updated: 2025/07/14 20:09:38 by gustavo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 1 && nb < 13)
	{
		while (nb > 1)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(0));
// }
