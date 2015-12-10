/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:17:49 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/09 14:12:22 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*pdst;
	unsigned char		*psrc;
	unsigned char		pc;

	pc = (unsigned char)c;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (*psrc != pc && n--)
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
	}
	if (*psrc == pc)
		return (pdst + 1);
	return (NULL);
}
