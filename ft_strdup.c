/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:35:41 by setilbec          #+#    #+#             */
/*   Updated: 2026/08/06 13:10:49 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	y;
	char	*new_memory;

	i = 0;
	while (s[i])
		i++;
	new_memory = (char *)malloc(sizeof(char) * (i + 1));
	if (!new_memory)
		return (NULL);
	y = 0;
	while (y < i)
	{
		new_memory[y] = s[y];
		y++;
	}
	new_memory[y] = '\0';
	return (new_memory);
}
