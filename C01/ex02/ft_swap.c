/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:32:27 by mzangaro          #+#    #+#             */
/*   Updated: 2024/07/11 23:18:43 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)

{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int main(void)
{
	int a;
	int b;

	a = 5;
	b = 10;

	ft_swap(&a, &b);
	return(0);
}*/