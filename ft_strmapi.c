/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgouedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:05:06 by tgouedar          #+#    #+#             */
/*   Updated: 2018/11/12 19:14:57 by tgouedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	if (!(s))
		return (NULL);
	i = ft_strlen(s) + 1;
	if (!(res = (char*)malloc(sizeof(*s) * i)))
		return (NULL);
	i = 0;
	while (*s)
	{
		res[i] = (*f)(i, *s++);
		i++;
	}
	res[i] = '\0';
	return (res);
}
