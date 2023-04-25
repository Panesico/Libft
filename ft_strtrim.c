/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgfern <jorgfern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:05:49 by jorgfern          #+#    #+#             */
/*   Updated: 2023/04/25 18:54:23 by jorgfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchrcmp(char c, char const *set, size_t counter)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[counter])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	str = (char *)malloc(s1_len * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (ft_strchrcmp(s1[i], set, i))
		i++;
	j = s1_len;
	while (ft_strchrcmp(s1[j], set, j))
		j--;
	k = 0;
	while (i <= j)
		str[k++] = s1[i++];
	return (str);
}
