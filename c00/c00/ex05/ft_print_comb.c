/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlahteen <rlahteen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:58:25 by rlahteen          #+#    #+#             */
/*   Updated: 2024/09/05 17:53:33 by rlahteen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	char	a, b, c, d, e;

	a = '0';
	d = ',';
	e = ' ';

	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &e, 1);
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

int main(void)
{
	ft_print_comb();
	return(0);
}
