/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:13:31 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/04 20:21:51 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static long	ft_divint(int n)
{
	int		i;

	i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_neg_itoa(long n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;
	int		neg;

	nb = (long)n;
	neg = 0;
	len = ft_divint(n);
	if (ft_neg_itoa(n) == 1)
		neg = 1;
	str = malloc(sizeof(char *) * (len + 1 + neg));
	str[len + 1] = '\0';
	if (n < 0)
	{
		nb = -n;
		str[0] = '-';
	}
	while (nb > 9)
	{
		str[len--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (nb < 10)
		str[len] = nb + '0';
	return (&(str[len]));
}	
