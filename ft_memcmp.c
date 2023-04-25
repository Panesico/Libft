/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgfern <jorgfern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:05:30 by jorgfern          #+#    #+#             */
/*   Updated: 2023/04/25 18:05:30 by jorgfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char *)s1 < (unsigned char *)s2)
			return (-1);
		else if ((unsigned char *)s1 > (unsigned char *)s2)
			return (1);
	}
	return (0);
}
