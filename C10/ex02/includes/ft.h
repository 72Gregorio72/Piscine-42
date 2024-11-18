/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:30:23 by gpicchio          #+#    #+#             */
/*   Updated: 2024/11/07 12:08:56 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_tail(char *file_name, char *prog_name);
int		ft_strlen(char *str);
void	ft_putstr(char *str, char *prog_name, char *pg);
char	*ft_strdup(char *src);
char	*ft_strndup(char *src, int n);
void	ft_ctail(char *file_name, char *prog_name, int n, char *pg);
int		ft_filelen(int fd);
int		ft_atoi(char *str);
void	print_invalid_number_error(char *filename, char *prog_name);
int		find_check_and_argument(int ac, char **av, int *n, int *found);
void	handle_tail_with_option(int ac, char **av);
void	print_file_header(char *filename);
void	process_single_file(int ac, char **av);
int		check_c(char *c);
void	print_usage_error(char *prog_name);
void	handle_checked_option(int ac, char **av, int i, int n);
void	handle_unchecked_option(int ac, char **av, int i);

typedef struct s_tail_option
{
	int	i;
	int	found;
	int	letsgosky;
	int	fd;
	int	check;
	int	n;
}	t_tail_option;
