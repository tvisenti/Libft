/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:39:34 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/03 10:17:38 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	k;
	int	save;

	i = 0;
	if (!ft_strlen(s2))
		return ((char *)s1);
	while (s1[i])
	{
		k = 0;
		save = 0;
		if (s1[i] == s2[k])
			save = i;
		while (s1[i] == s2[k])
		{
			i++;
			k++;
			if (s2[k] == '\0')
				return ((char *)s1 + save);
		}
		i++;
	}
	return (NULL);
}
