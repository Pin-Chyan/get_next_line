/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitsai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 19:46:33 by pitsai            #+#    #+#             */
/*   Updated: 2019/06/27 17:38:23 by pitsai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <libft.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 42

# define MALLCHECK(x) if (!x) return (-1);

int		get_next_line(const int fd, char **line);

#endif
