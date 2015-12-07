/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 12:03:15 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/06 13:40:00 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		k;

	i = ft_strlen(s1);
	k = ft_strlen(s2) + 1;
	new = malloc(sizeof(i + k));
	new = ft_strdup(s1);
	new = ft_strcat(new, s2);
	return (new);
}
