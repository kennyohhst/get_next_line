/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:01:07 by kkalika           #+#    #+#             */
/*   Updated: 2022/07/10 19:38:23 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFERSIZE
#  define BUFFERSIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

char	*two_callocs(char **tmp, char **dest);
void	return_line(char **dst, char **tl, char **b);
int		read_line(char **tline, char **dst, int fd);
char	*get_next_line(int c);
void	*ft_calloc(size_t count, size_t size);
char	*strljoin(char *s1, char *s2, int lenght, int x);
char	*freegnl(char *s);
int		nl(const char *s);
int		lookend(const char *s);

#endif
