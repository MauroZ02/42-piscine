/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:55:51 by mzangaro          #+#    #+#             */
/*   Updated: 2024/07/24 12:55:53 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\f'
		|| c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	is_negative;
	int	number;

	i = 0;
	number = 0;
	is_negative = 0;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			is_negative = !is_negative;
	}
	while (is_number(str[i]) && str[i] != '\0')
		number = 10 * number + str[i++] - '0';
	if (is_negative)
		return (-number);
	return (number);
}

/*
#include <stdio.h>

int main(void)
{
	int num;

	num = ft_atoi("    	 ---+--+1234ab567");

	printf("%d", num);
}
*/
