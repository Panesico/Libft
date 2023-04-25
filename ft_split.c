/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgfern <jorgfern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:05:36 by jorgfern          #+#    #+#             */
/*   Updated: 2023/04/25 18:56:48 by jorgfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_arraylen(char *str, char delimiter)
{
	size_t	i;
	size_t	del_count;

	if (!str)
		return (0);
	i = 0;
	del_count = 1;
	while (str[i])
	{
		if (str[i] == delimiter)
			del_count++;
		i++;
	}
	return (del_count);
}

int	ft_wordlen(char *str, char del, size_t i)
{
	size_t	len;

	len = 0;
	while (str[i] != del)
		len++;
	return (len);
}

void	ft_free_array_if_error(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**array;

	array = (char **)malloc((ft_arraylen((char *)s, c) + 1) * sizeof(char *));
	if (!array)
		return (0);
	i = 0;
	while (i < ft_arraylen((char *)s, c))
	{
		j = 0;
		array[i] = (char *)malloc((ft_wordlen((char *)s, c, i) + 1) * 1);
		if (!array[i])
		{
			ft_free_array_if_error(array);
			return (0);
		}
		while (*s != c && *s)
			array[i][j++] = *(s++);
		array[i++][j] = 0;
		s++;
	}
	array[i] = 0;
	return (array);
}
