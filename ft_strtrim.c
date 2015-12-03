/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:15:41 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/02 18:01:00 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s2;
	int		i;
	int		k;
	int		m;

	i = 0;
	m = 0;
	k = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while ((s[k] == ' ' && k > i) || (s[k] == '\t' && k > i) ||
			(s[k] == '\n' && k > i))
		k--;
	s2 = malloc(sizeof(char) * (k - i + 2));
	if (s2 == NULL)
		return (NULL);
	s2[++k] = '\0';
	while (i < k)
		s2[m++] = s[i++];
	return (s2);
}
