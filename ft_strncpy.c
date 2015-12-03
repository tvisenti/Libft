/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 08:29:00 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/01 16:45:11 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int	i;

	i = 0;
	while (src[i] && n)
	{
		dst[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dst[i] = '\0';
		i++;
		n--;
	}
	return (dst);
}
