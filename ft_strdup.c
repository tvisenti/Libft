/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:26:47 by tvisenti          #+#    #+#             */
/*   Updated: 2015/11/29 12:00:26 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	int			i;

	i = -1;
	s2 = (char *)malloc(sizeof(s1));
	if (s2 == NULL)
		return (NULL);
	while (s1[++i] != '\0')
		s2[i] = s1[i];
	return (char *)(s2);
}
