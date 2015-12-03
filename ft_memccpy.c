/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:17:49 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/02 18:36:48 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*pdst;
	char		*psrc;

	pdst = (char *)dst;
	psrc = (char *)src;
	while (*pdst && *psrc && n)
	{
		if (*psrc == (char)c)
			return (pdst++);
		n--;
		*pdst++ = *psrc++;
	}
	return (NULL);
}
