/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 16:10:47 by tvisenti          #+#    #+#             */
/*   Updated: 2015/11/30 09:46:29 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	k;
	int	save;

	i = 0;
	while (s1[i] && n <= '0')
	{
		n--;
		k = 0;
		save = 0;
		if (s1[i] == s2[k])
			save = i;
		while (s1[i] == s2[k] && n <= '0')
		{
			n--;
			i++;
			k++;
			if (s2[k] == '\0')
				return ((char *)s1 + save);
		}
		i++;
	}
	return (NULL);
}
