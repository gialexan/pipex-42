/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:00:07 by gialexan          #+#    #+#             */
/*   Updated: 2022/11/11 15:53:21 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <sys/wait.h>
# include "../libft/libft.h"

typedef struct s_data
{
	int		argc;
	char	**argv;
	char	**envp;
	char	**paths;
	char	**cmd;
	char	*path;
	char	*access;
	int		file[2];
	int		index;
}	t_data;

int		find_cmd(t_data *data);
void	start_pipex(t_data *data);
void	create_path(t_data *data);
void	clear(char **array, char *str);
void	check_error(int function, char *cmd);
void	check_file(t_data *data, int file_index, int file);

#endif