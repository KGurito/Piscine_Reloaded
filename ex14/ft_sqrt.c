/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusoares <gusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 23:47:06 by gustavo           #+#    #+#             */
/*   Updated: 2025/07/15 16:51:32 by gusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	square;
	int	i;

	i = 1;
	square = 1;
	if (nb <= 0 || nb > 2147395601)
	{
		return (0);
	}
	while (i < 46341)
	{
		i *= square;
		if (nb == i)
		{
			return (square);
		}
		square++;
		i = square;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(-2));
// }
