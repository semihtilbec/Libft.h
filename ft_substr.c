/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 13:34:35 by setilbec          #+#    #+#             */
/*   Updated: 2026/08/06 15:09:32 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	string_len;
	size_t	i;
	char	*new_memory;

	if (!s)
		return (NULL);
	string_len = 0;
	while (s[string_len])
		string_len++;
	if (start >= string_len)
		len = 0;
	else if ((len > string_len - start))
		len = string_len - start;
	new_memory = (char *)malloc(len + 1);
	if (!new_memory)
		return (NULL);
	i = -1;
	while (++i < len)
		new_memory[i] = s[start + i];
	new_memory[i] = '\0';
	return (new_memory);
}
