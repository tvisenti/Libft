/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:43:18 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/01 20:25:31 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if ((unsigned int)n > 9)
	{
		ft_putnbr_fd(((unsigned int)n / 10), fd);
		ft_putnbr_fd(((unsigned int)n % 10), fd);
	}
	else
		ft_putchar_fd((unsigned int)n + '0', fd);
}
