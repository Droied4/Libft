/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:25:48 by deordone          #+#    #+#             */
/*   Updated: 2023/09/26 11:52:16 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (i < (int)n)
	{
		s[i] = '\0';
		i++;
	}
}