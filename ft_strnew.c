/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:31:21 by tvisenti          #+#    #+#             */
/*   Updated: 2015/11/29 18:58:21 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*t;
	int		i;

	i = 0;
	t = malloc(size * sizeof(char));
	if (t == NULL)
		return (NULL);
	while (t[i] != '\0')
	{
		t[i] = '\0';
		i++;
	}
	return (t);
}
