/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:01:07 by kkalika           #+#    #+#             */
/*   Updated: 2022/07/28 20:40:14 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFERSIZE
#  define BUFFERSIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

char	*get_next_line(int c);
void	*ft_calloc(size_t count, size_t size);
char	*strljoin(char *s1, char *s2, int lenght, int x);
char	*freegnl(char *s);
int		nl(const char *s);
int		lookend(const char *s);

#endif
