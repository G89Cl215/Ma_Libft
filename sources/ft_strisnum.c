/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgouedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 19:12:22 by tgouedar          #+#    #+#             */
/*   Updated: 2019/07/01 12:16:10 by tgouedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strisnum(char *str)
{
	size_t		i;

	if ((str))
	{
		i = (*str == '-' || *str == '+') ? 1 : 0;
		while ((str[i]) && ft_isdigit(str[i]))
			i++;
	}
	return ((str) && !(str[i]));
}
