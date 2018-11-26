/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgouedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:56:39 by tgouedar          #+#    #+#             */
/*   Updated: 2018/11/15 18:28:19 by tgouedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dup;

	i = ft_strlen(str);
	if (!(dup = (char *)malloc(sizeof(*dup) * (i + 1))))
		return (NULL);
	dup[i] = '\0';
	while (i-- > 0)
		dup[i] = str[i];
	return (dup);
}
