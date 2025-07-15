/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo <gustavo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 23:47:06 by gustavo           #+#    #+#             */
/*   Updated: 2025/07/15 01:56:28 by gustavo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	float	square;
	int	i;

	i = 1;
	square = nb;
	if (nb <= 0 || nb > 2147395601)
	{
		return (0);
	}
	while (i < 20)
	{
		square = square/2 + nb/(2*square);
		i++;
	}
	i = square;
	return (i);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(2));
}