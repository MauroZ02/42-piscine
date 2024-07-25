/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:28:00 by mzangaro          #+#    #+#             */
/*   Updated: 2024/07/11 16:37:23 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writecharacters(int a, int b)
{
	char	c1;
	char	c2;
	char	s;
	char	c3;

	s = ' ';
	c1 = a / 10 + '0';
	c3 = c1;
	write(1, &c1, 1);
	c1 = a % 10 + '0';
	write(1, &c1, 1);
	write(1, &s, 1);
	c2 = b / 10 + '0';
	write(1, &c2, 1);
	c2 = b % 10 + '0';
	write(1, &c2, 1);
	if (c3 != '9' || c1 != '8')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = 0;
		while (b <= 99)
		{
			if (a < b)
			{
				ft_writecharacters(a, b);
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
