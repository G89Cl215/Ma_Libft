/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgouedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 16:50:46 by tgouedar          #+#    #+#             */
/*   Updated: 2019/04/06 16:49:19 by tgouedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "option.h"
#include "libft.h"

static int		ft_usage(char arg)
{
	ft_printf("./ft_ls: illegal option -- %c\n", arg);
	ft_printf("usage: ./ft_ls [-%s] [file ...]", OPT);
	return (0);
}

static void		ft_taiga(char opt, t_options *options)
{
	if (opt == 'l')
		options->l = 1;
}

static int		ft_fill_option(char *arg, t_options *options)
{
	arg++;
	while (*arg && ft_isin(*arg, OPT))
	{
		ft_taiga(*arg, options);
		arg++;
	}
	if (*arg && !ft_isin(*arg, OPT))
		return (ft_usage(*arg));
	return (1);
}

int				ft_option(char ***av, t_options *options)
{
	(*av)++;
	while ((**av) && ***av == '-' && ((**av)[1]))
	{
		if (!(ft_fill_option(**av, options)))
			return (0);
		(*av)++;
	}
	return (1);
}
