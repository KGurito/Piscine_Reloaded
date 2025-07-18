/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusoares <gusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:48:37 by gusoares          #+#    #+#             */
/*   Updated: 2025/07/15 21:17:20 by gusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char caracter);

void	ft_putchar(char caracter)
{
	write(1, &caracter, 1);
}

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return(s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] != '\0')
	{
		return(s1[i] - s2[i]);
	}
	return (0);
}

void	ft_sort_values(int argc, char *argv[])
{
	char	*change;
	int	i;

	while (argc > 1)
	{
		i = 1;
		while (argv[i + 1])
		{
			if (ft_strcmp(argv[i], argv[i+1]) > 0)
			{
				change = argv[i];
				argv[i] = argv[i+1];
				argv[i+1] = change;
			}
			i++;
		}
		argc--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort_values(argc, argv);
	while (argc > 1)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
		argc--;
	}
}
