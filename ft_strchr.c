/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 14:01:21 by setilbec          #+#    #+#             */
/*   Updated: 2026/08/05 14:23:35 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	nc;

	nc = (unsigned char)c;
	while (*s != '\0')
	{
		if ((const char)*s == nc)
			return ((char *)s);
		s++;
	}
	if (nc == '\0')
		return ((char *)s);
	return (NULL);
}
