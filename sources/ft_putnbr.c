/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgouedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:50:56 by tgouedar          #+#    #+#             */
/*   Updated: 2019/02/08 20:06:47 by baavril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	i;

	if (n < 0)
		ft_putchar('-');
	i = (n < 0 ? -n : n);
	if (i >= 10)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}
