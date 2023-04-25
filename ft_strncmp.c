/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgfern <jorgfern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:05:46 by jorgfern          #+#    #+#             */
/*   Updated: 2023/04/25 18:52:22 by jorgfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			if (s1[i] < s2[i])
				return (-1);
			if (s1[i] > s2[i])
				return (1);
		}
	}
	return (0);
}
