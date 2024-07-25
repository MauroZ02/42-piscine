/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzangaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:46:24 by mzangaro          #+#    #+#             */
/*   Updated: 2024/07/20 19:46:25 by mzangaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!(size == 0))
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];
    unsigned int length;

    // Copy src to dest with a size of 15 (including the null terminator)
    length = ft_strlcpy(dest, src, 15);

    // Print the result and the length of src
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Length of source: %u\n", length);

    return 0;
}*/