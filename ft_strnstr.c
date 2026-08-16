/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:34:34 by setilbec          #+#    #+#             */
/*   Updated: 2026/08/05 18:07:50 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (!*little)
		return ((char *)big);
	b = 0;
	while (b < len && big[b])
	{
		l = 0;
		while ((b + l) < len && little[l]
			&& big[b + l] == little[l])
		{
			l++;
		}
		if (!little[l])
			return ((char *)&big[b]);
		b++;
	}
	return (NULL);
}
