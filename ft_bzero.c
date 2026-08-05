/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:20:14 by setilbec          #+#    #+#             */
/*   Updated: 2026/08/05 14:00:01 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pt;
	size_t			i;

	pt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pt[i] = 0;
		i++;
	}
}
