/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 13:15:51 by setilbec          #+#    #+#             */
/*   Updated: 2026/08/06 13:29:59 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*pt;
	unsigned char	*p;
	size_t			total;
	size_t			i;

	total = nmemb * size;
	pt = malloc(total);
	if (!pt)
		return (NULL);
	p = (unsigned char *)pt;
	i = 0;
	while (i < total)
	{
		p[i] = 0;
		i++;
	}
	return (pt);
}
