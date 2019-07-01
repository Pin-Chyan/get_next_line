#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 2
# define FD_MAX 4864

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <fcntl.h>
# include <limits.h>
# include "./libft/libft.h"

int	get_next_line(const int fd, char **line);
int step2(int fd, char *s[], char **line);

#endif
