/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:17:49 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/06 13:26:45 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*pdst;
	unsigned char		*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (*psrc != (unsigned char)c && n--)
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
	}
	if (*psrc == (unsigned char)c)
		return ((void *)(pdst + 1));
	return (NULL);
}
