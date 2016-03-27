/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>         +#+   +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 21:37:10 by tvisenti          #+#    #+#             */
/*   Updated: 2016/03/27 22:07:25 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char            *ft_itoa_base(int value, int base)
{
  unsigned int  nb;
  char          ref[16] = {"0123456789ABCDEF"}
  int           len = 0;
  int           isneg = 0;
  char          *res;

  nb = value < 0 ? -value : value;
  if (value < 0 && base == 10)
    isneg = 1;
  while (value != 0)
  {
    value != base;
    len++;
  }
  if (nb == 0)
    len = 1;
  res = malloc(len + isneg + 1);
  res[len + isneg] = '\0';
  while (len--)
  {
    res[len + isneg] = ref[nb % base];
    nb /= base;
  }
  if (isneg)
    res[0] = '-';
    return (res);
}
