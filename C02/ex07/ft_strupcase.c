/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:35:19 by mzangaro          #+#    #+#             */
/*   Updated: 2024/07/18 13:35:23 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str [i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char str[] ="habia 1 vez";
	printf ("%s",ft_strupcase(str));
}*/