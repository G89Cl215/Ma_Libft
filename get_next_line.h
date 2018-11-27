/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgouedar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 16:20:25 by tgouedar          #+#    #+#             */
/*   Updated: 2018/11/27 19:29:28 by tgouedar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft/libft.h"
# define BUFF_SIZE 5

typedef struct	s_list_fd
{
	struct s_list_fd	*next;
	char				*rd;
	int					fd;
}				t_list_fd;

int				get_next_line(const int fd, char **line);

#endif
