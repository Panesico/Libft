/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgfern <jorgfern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:05:29 by jorgfern          #+#    #+#             */
/*   Updated: 2023/04/25 18:35:07 by jorgfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	int	*mem;

	mem = (int *)s;
	while (n > 0)
	{
		if (*mem == c)
			return (mem);
		mem++;
		n--;
	}
	return (0);
}
