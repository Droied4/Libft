/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:50:02 by deordone          #+#    #+#             */
/*   Updated: 2023/09/24 15:31:56 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_howmchars(char const *s, char c)
{
	char	*s2;
	int		i;
	int		j;

	i = ft_strlen(s);
	s2 = ft_strchr(s, c);
	if (s2 != NULL)
		j = ft_strlen(s2);
	else
	{
		s2 = (char *)s;
		j = ft_strlen(s2);
		i = i * 2;
	}
	return (i - j);
}

int	ft_howmwords(char const *s, char c)
{
	int	count;
	int	count2;

	count = 0;
	count2 = ft_howmchars(s, c);
	while (*s != '\0')
	{
		s++;
		if ((*s == c || *s == '\0') && count2 > 0)
			count++;
		count2 = ft_howmchars(s, c);
	}
	return (count);
}

char	**ft_loop(char c, char **fs, char *s2, int j)
{
	char	*s1;
	int		diff;
	int		i;

	i = 0;
	while (i < j)
	{
		diff = ft_howmchars(s2, c);
		s1 = malloc(sizeof(char) * (diff + 1));
		if (!s1)
			return (NULL);
		s1 = ft_memcpy(s1, s2, diff);
		s2 = ft_strchr(s2, c) + 1;
		s1 [diff] = '\0';
		if (ft_strlen(s1) > 0)
		{
			fs[i] = s1;
			i++;
		}
		else
			free(s1);
	}
	fs[i] = NULL;
	return (fs);
}

char	**ft_split(char const *s, char c)
{
	char	**fs;
	char	*s2;
	int		j;

	s2 = (char *)s;
	j = ft_howmwords(s2, c);
	fs = (char **)malloc((j + 1) * sizeof(char *));
	return (ft_loop(c, fs, s2, j));
}
