/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:28:30 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/06 13:35:15 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		buff_src[ft_strlen(src)];
	char		*psrc;
	char		*pdst;
	int			i;

	psrc = (char *)src;
	pdst = (char *)dst;
	i = 0;
	while (psrc[i] != '\0')
	{
		buff_src[i] = psrc[i];
		i++;
	}
	buff_src[i] = '\0';
	i = 0;
	while (i < ((int)len))
	{
		pdst[i] = buff_src[i];
		i++;
	}
	return (pdst);
}
