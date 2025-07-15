/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusoares <gusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:24:32 by gusoares          #+#    #+#             */
/*   Updated: 2025/07/15 18:45:54 by gusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char caracter);

// void	ft_putchar(char caracter)
// {
// 	write(1, &caracter, 1);
// }

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argc > 1)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
		argc--;
	}
}