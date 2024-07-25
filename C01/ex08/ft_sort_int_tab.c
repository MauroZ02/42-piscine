/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:48:07 by mzangaro          #+#    #+#             */
/*   Updated: 2024/07/16 20:02:18 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size)

{
	int		i;
	int		j;
	int		temp;
	int		count;

	i = 0;
	count = 0;
	while (i < size - 1)
	{
		j = i + 1;
		if (tab[i] > tab[j])
		{
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
			count++;
		}
		i++;
	}
	if (count != 0)
		ft_sort_int_tab(tab, size);
}

/*int	main(void)
{
	int array[] = {4, 2, 3, 1};
	int size = sizeof(array) / sizeof(array[0]);

	printf("Original array:\n");
	print_array(array, size);

	ft_sort_int_tab(array, size);

	printf("Sorted array:\n");
	print_array(array, size);

	return 0;
}*/