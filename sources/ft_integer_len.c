/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgouedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 21:37:19 by tgouedar          #+#    #+#             */
/*   Updated: 2019/03/13 21:37:39 by tgouedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				integer_len(int nbr)
{
	int l;

	l = 1;
	while (nbr /= 10)
		++l;
	return (l);
}
