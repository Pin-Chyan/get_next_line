#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

# define BUFF_SIZE 222
# define FD_LIMIT 8192

int		get_next_line(const int fd, char **line);

#endif
