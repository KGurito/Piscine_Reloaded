/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusoares <gusoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:56:15 by gusoares          #+#    #+#             */
/*   Updated: 2025/07/15 18:22:24 by gusoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_choice(int result)
{
	if (result > 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return(ft_choice(result));
		}
		i++;
	}
	if (s2[i] != '\0')
	{
		result = s1[i] - s2[i];
		return(ft_choice(result));
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("gus","gus4"));
// }
