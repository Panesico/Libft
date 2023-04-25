/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgfern <jorgfern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:05:07 by jorgfern          #+#    #+#             */
/*   Updated: 2023/04/25 18:19:56 by jorgfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*mem;

	if (!nelem || !elsize)
		return (0);
	mem = malloc(nelem * elsize);
	if (!mem)
		return (0);
	ft_bzero(mem, nelem * elsize);
	return (mem);
}
