/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 14:35:12 by setilbec          #+#    #+#             */
/*   Updated: 2026/08/07 15:20:29 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char a, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = 0;
	while (s1[end])
		end++;
	while (s1[start] && in_set(s1[start], set))
		start++;
	while ((end > start) && in_set(s1[end - 1], set))
		end--;
	new_str = (char *)malloc(end - start + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (start < end)
		new_str[i++] = s1[start++];
	new_str[i] = '\0';
	return (new_str);
}
