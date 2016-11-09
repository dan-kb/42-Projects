/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbanifat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 14:07:54 by dbanifat          #+#    #+#             */
/*   Updated: 2016/10/29 17:58:15 by dbanifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft/libft.h"

int					get_next_line(const int fd, char **line);

typedef	struct		s_fd
{
	int				fd;
	char			*t_line;
	struct s_fd		*next;
	struct s_fd		*sort;
}					t_fd;

#endif
