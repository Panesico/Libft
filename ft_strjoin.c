/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgfern <jorgfern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:05:38 by jorgfern          #+#    #+#             */
/*   Updated: 2023/04/25 18:52:10 by jorgfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (j < (size_t)ft_strlen(s1))
		str[i++] = s1[j++];
	j = 0;
	while (j < (size_t)(ft_strlen(s1) + ft_strlen(s2)))
		str[i++] = s2[j++];
	str[i] = 0;
	return (str);
}
