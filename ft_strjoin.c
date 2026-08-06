/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 15:58:52 by setilbec          #+#    #+#             */
/*   Updated: 2026/08/06 16:42:12 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_join(size_t i1, size_t i2, char const *s1, char const *s2)
{
	char	*new_str;

	new_str = (char *)malloc(i1 + i2 + 1);
	if (!new_str)
		return (NULL);
	i1 = 0;
	i2 = 0;
	while (s1[i1])
	{
		new_str[i1] = s1[i1];
		i1++;
	}
	while (s2[i2])
	{
		new_str[i1] = s2[i2];
		i1++;
		i2++;
	}
	new_str[i1] = '\0';
	return (new_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i1])
		i1++;
	while (s2[i2])
		i2++;
	return (ft_join(i1, i2, s1, s2));
}
