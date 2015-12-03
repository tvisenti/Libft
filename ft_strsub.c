/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 11:28:35 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/02 18:32:20 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = malloc(sizeof(char *) * (len));
	if (s2 == NULL)
		return (NULL);
	while (len--)
		s2[i++] = s[start++];
	return (s2);
}
