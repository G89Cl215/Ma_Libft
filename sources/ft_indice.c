/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgouedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 03:11:30 by tgouedar          #+#    #+#             */
/*   Updated: 2018/12/14 03:15:29 by tgouedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_indice(char c, char *charset)
{
	size_t	i;

	i = 0;
	while (charset[i] && charset[i] != c)
		i++;
	return (i);
}