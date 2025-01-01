# ifndef PIPEX_H
# define PIPEX_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdlib.h>

char	**ft_split(char *str, char c);
size_t	ft_strlen(char *str);
void	ft_putstr_fd(char *str, int exit_status);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
// pipex_utils.
void	error_msg(char *str, int stdio);
char	**get_path(char *cmd, char **env);
void	cmd_executed(char *argv, char **env);

# endif
