/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:00:48 by mzangaro          #+#    #+#             */
/*   Updated: 2024/07/20 20:00:50 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 1);
			ft_print_hexa((unsigned char)*str);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}

/*int main(void)
{
	char test1[] = "Coucou\ntu vas bien ?";
	char test2[] = "Hello\x01\x02World!";
	
	ft_putstr_non_printable(test1);
	ft_putchar('\n');
	ft_putstr_non_printable(test2);
	ft_putchar('\n');
	
	return 0;
}*/
