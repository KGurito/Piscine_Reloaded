/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo <gustavo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:26:16 by gustavo           #+#    #+#             */
/*   Updated: 2025/07/14 18:46:39 by gustavo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int main(void)
// {
//     int a = 8;
//     int b = 2;
//     int as = 0;
//     int os = 0;
//     int *div = &as;
//     int *mod = &os;

//     ft_div_mod(a, b, div, mod);

//     printf("Divisão: %d\n", as);
//     printf("Resto: %d\n", os);
// }
