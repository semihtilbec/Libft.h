/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 14:25:26 by setilbec          #+#    #+#             */
/*   Updated: 2026/08/05 18:12:40 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	nc;
	char			*last;

	nc = (unsigned char)c;
	last = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)*s == nc)
			last = (char *)s;
		s++;
	}
	if (nc == '\0')
		return ((char *)s);
	return (last);
}
