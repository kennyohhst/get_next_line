/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalika <kkalika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:21:33 by kkalika           #+#    #+#             */
/*   Updated: 2022/07/28 12:30:10 by kkalika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*freegnl(char *s)
{
	if (s)
		free(s);
	return (NULL);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < (count * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

char	*strljoin(char *s1, char *s2, int length, int x)
{
	char	*nstr;
	int		i;
	int		s;

	s = 0;
	i = lookend(s1);
	nstr = ft_calloc((i + length + 1), sizeof(char));
	if (!nstr)
		return (NULL);
	while (s1 && s1[x] != '\0')
	{
		nstr[x] = s1[x];
		x++;
	}
	while (s2 && s < length)
	{
		nstr[x] = s2[s];
		x++;
		s++;
	}
	if (s1)
		s1 = freegnl(s1);
	return (nstr);
}

int	nl(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i] != '\0')
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int	lookend(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i] != '\0')
	{
		i++;
	}
	return (i);
}
