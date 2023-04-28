/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgfern <jorgfern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:05:38 by jorgfern          #+#    #+#             */
/*   Updated: 2023/04/26 18:03:29 by jorgfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;
	char	*str;

	s1_len = (size_t)ft_strlen(s1);
	s2_len = (size_t)ft_strlen(s2);
	str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (j < s1_len && s1[j])
		str[i++] = s1[j++];
	j = 0;
	while (j < (s1_len + s2_len) && s2[j])
		str[i++] = s2[j++];
	str[i] = 0;
	return (str);
}
